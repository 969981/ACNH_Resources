
void FUN_0130d9a0(undefined8 *param_1,uint param_2)

{
  long lVar1;
  uint *puVar2;
  int iVar3;
  
  *param_1 = &PTR_LAB_0498dbb8;
  param_1[1] = 0;
  if ((int)*(uint *)(DAT_0519d040 + 0x7a8) < 1) {
    if ((((*(long *)(DAT_0519d040 + 0x698) != 0) &&
         (puVar2 = *(uint **)(*(long *)(DAT_0519d040 + 0x698) + 8), puVar2 != (uint *)0x0)) &&
        ((*(uint *)(DAT_0519d040 + 0x6b0) <= param_2 ||
         (*(char *)(*(long *)(DAT_0519d040 + 0x6b8) + (long)(int)param_2) != '\0')))) &&
       (((param_2 < *puVar2 && (puVar2[1] != 0)) && ((ushort)puVar2[2] != 0)))) {
      iVar3 = 0xc;
      if (*(char *)((long)puVar2 + 10) != '\0') {
        iVar3 = 0x1c;
      }
      lVar1 = (ulong)(puVar2[1] * param_2 + (uint)(ushort)puVar2[2] * 8 + iVar3) + (long)puVar2;
      goto LAB_0130da60;
    }
  }
  else if (param_2 < *(uint *)(DAT_0519d040 + 0x7a8)) {
    if (*(uint *)(DAT_0519d040 + 0x798) <= param_2) {
      param_2 = 0;
    }
    lVar1 = *(long *)(*(long *)(DAT_0519d040 + 0x7a0) + (ulong)param_2 * 8);
    goto LAB_0130da60;
  }
  lVar1 = 0;
LAB_0130da60:
  param_1[1] = lVar1;
  return;
}

