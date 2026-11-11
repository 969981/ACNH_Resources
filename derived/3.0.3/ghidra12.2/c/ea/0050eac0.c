
void _INIT_555(void)

{
  if ((DAT_04c73c18 & 1) == 0) {
    DAT_04c73c08 = 0;
    DAT_04c73c10 = 0;
    DAT_04c73c18 = 1;
  }
  return;
}

