#define MAGIC_NAN 0x7FFFFFFFul

/* public function returning float fields undeclared in m_pd.h.
 Arguments: object/inlet number (0 indexed) */
EXTERN t_float *obj_findsignalscalar(t_object *x, int m);

union magic_ui32_fl {
	uint32_t uif_uint32;
	t_float uif_float;
};

void magic_setnan (t_float *in);
int magic_isnan (t_float in);

int magic_inlet_connection(t_object *x, t_glist *glist, int inno, t_symbol *outsym);
