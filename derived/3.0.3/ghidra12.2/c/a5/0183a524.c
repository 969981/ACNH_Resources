
void FUN_0183a524(long param_1)

{
  byte bVar1;
  long *plVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  
  uVar4 = FUN_01813a64();
  if ((uVar4 & 1) != 0) {
    return;
  }
  lVar5 = *(long *)(param_1 + 0x3d0);
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x2d8) + 0x28))(lVar5 + 0x2d8);
    plVar2 = DAT_0537d558;
    uVar4 = FUN_01d3e29c(*DAT_0537d558 + 8);
    if ((uVar4 & 1) != 0) {
      bVar1 = *(byte *)(*DAT_0537d558 + 0x473);
      if ((long)(char)bVar1 != 0xffffffffffffffff) {
        lVar5 = plVar2[2] + 0x108 + ((long)(char)bVar1 & 0xffffffffU) * 0xc;
        if (0xb < bVar1) {
          lVar5 = plVar2[2] + 0x108;
        }
        if (*(char *)(lVar5 + 10) == '\0') {
          return;
        }
      }
    }
    if ((((*(long *)(param_1 + 0x3d0) != 0) &&
         (lVar5 = *(long *)(*(long *)(param_1 + 0x3d0) + 0x300), lVar5 != 0)) &&
        (*(float *)(lVar5 + 0x2b8) < *(float *)(lVar5 + 0x2b0))) &&
       (FUN_0183bb88(param_1), *(char *)(param_1 + 0x4d8) != '\0')) {
      iVar3 = 0;
      goto LAB_0183a6b8;
    }
  }
  iVar3 = (**(code **)(*(long *)(param_1 + 0x510) + (ulong)*(byte *)(param_1 + 0x524) * 8))
                    (param_1 + 0x510);
  *(int *)(param_1 + 0x518) = iVar3;
  if (iVar3 == *(int *)(param_1 + 0x520)) {
    lVar5 = *(long *)(param_1 + 0x3d0);
    if (lVar5 == 0) {
LAB_0183a67c:
      FUN_0183b8d4(param_1);
    }
    else {
      (**(code **)(*(long *)(lVar5 + 0x2d8) + 0x28))(lVar5 + 0x2d8);
      plVar2 = DAT_0537d558;
      uVar4 = FUN_01d3e29c(*DAT_0537d558 + 8);
      if ((uVar4 & 1) == 0) goto LAB_0183a67c;
      bVar1 = *(byte *)(*DAT_0537d558 + 0x473);
      if ((long)(char)bVar1 == 0xffffffffffffffff) goto LAB_0183a67c;
      lVar5 = plVar2[2] + 0x108 + ((long)(char)bVar1 & 0xffffffffU) * 0xc;
      if (0xb < bVar1) {
        lVar5 = plVar2[2] + 0x108;
      }
      if (*(char *)(lVar5 + 10) != '\0') goto LAB_0183a67c;
    }
    if (*(char *)(param_1 + 0x4d8) != '\0') {
      iVar3 = 6;
      goto LAB_0183a6b8;
    }
  }
  if (*(int *)(param_1 + 0x4b8) != *(int *)(param_1 + 0x4c0)) {
    return;
  }
  iVar3 = 1;
LAB_0183a6b8:
  if (*(int *)(param_1 + 0x280) == iVar3) {
    return;
  }
  FUN_03ebb160(param_1 + 0x278);
  return;
}

