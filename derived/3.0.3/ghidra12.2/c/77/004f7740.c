
void _INIT_400(void)

{
  if ((DAT_04c72368 & 1) == 0) {
    DAT_04c72358 = 0;
    DAT_04c72360 = 0;
    DAT_04c72368 = 1;
  }
  return;
}

