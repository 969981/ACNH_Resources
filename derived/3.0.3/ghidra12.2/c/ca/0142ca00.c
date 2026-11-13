
void FUN_0142ca00(long param_1)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  void *pvVar4;
  uint uVar5;
  ushort uVar6;
  long lVar7;
  uint *puVar8;
  uint *puVar9;
  void *pvVar10;
  long lVar11;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  
  pvVar10 = *(void **)(param_1 + 0x3b8);
  (**(code **)(DAT_051bbbc0 + 0x18))(&DAT_051bbbc0);
  pvVar4 = DAT_051bbbc8;
  if (pvVar10 != DAT_051bbbc8) {
    (**(code **)(DAT_051bbbc0 + 0x18))(&DAT_051bbbc0);
    lVar7 = 0;
    do {
      if (*(char *)((long)DAT_051bbbc8 + lVar7) == '\0') goto LAB_0142caa0;
      if (*(char *)((long)DAT_051bbbc8 + lVar7 + 1) == '\0') {
        lVar7 = lVar7 + 1;
        goto LAB_0142caa0;
      }
      if (*(char *)((long)DAT_051bbbc8 + lVar7 + 2) == '\0') {
        lVar7 = lVar7 + 2;
        goto LAB_0142caa0;
      }
      lVar7 = lVar7 + 3;
    } while (lVar7 != 0x80001);
    lVar7 = 0;
LAB_0142caa0:
    iVar1 = (int)lVar7;
    if (*(int *)(param_1 + 0x3c0) <= (int)lVar7) {
      iVar1 = *(int *)(param_1 + 0x3c0) + -1;
    }
    memcpy(pvVar10,pvVar4,(long)iVar1);
    *(undefined1 *)((long)pvVar10 + (long)iVar1) = 0;
  }
  pvVar10 = *(void **)(param_1 + 0x410);
  (**(code **)(DAT_051bbc18 + 0x18))(&DAT_051bbc18);
  pvVar4 = DAT_051bbc20;
  if (pvVar10 != DAT_051bbc20) {
    (**(code **)(DAT_051bbc18 + 0x18))(&DAT_051bbc18);
    lVar7 = 0;
    do {
      if (*(char *)((long)DAT_051bbc20 + lVar7) == '\0') goto LAB_0142cb4c;
      if (*(char *)((long)DAT_051bbc20 + lVar7 + 1) == '\0') {
        lVar7 = lVar7 + 1;
        goto LAB_0142cb4c;
      }
      if (*(char *)((long)DAT_051bbc20 + lVar7 + 2) == '\0') {
        lVar7 = lVar7 + 2;
        goto LAB_0142cb4c;
      }
      lVar7 = lVar7 + 3;
    } while (lVar7 != 0x80001);
    lVar7 = 0;
LAB_0142cb4c:
    iVar1 = (int)lVar7;
    if (*(int *)(param_1 + 0x418) <= (int)lVar7) {
      iVar1 = *(int *)(param_1 + 0x418) + -1;
    }
    memcpy(pvVar10,pvVar4,(long)iVar1);
    *(undefined1 *)((long)pvVar10 + (long)iVar1) = 0;
  }
  puVar3 = PTR_DAT_04bb43c0;
  lVar11 = *(long *)PTR_DAT_04bb43c0;
  uVar5 = FUN_0277d6c4(param_1 + 0x2c8);
  lVar7 = *(long *)puVar3;
  if (lVar7 != 0) {
    lVar11 = *(long *)(lVar11 + 0x57e58);
    uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
    if ((uVar5 < *(uint *)(lVar11 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) {
      local_50 = *(undefined4 *)(param_1 + 0x2c8);
      local_48 = 0;
      uStack_4c = *(undefined4 *)(param_1 + 0x2cc);
      uVar5 = FUN_0277d6c4(&local_50);
      uVar6 = 0;
      if (*(long *)puVar3 != 0) {
        lVar7 = *(long *)(lVar7 + 0x57e58);
        uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
        if (uVar5 < *(uint *)(lVar7 + 0x1d8)) {
          uVar6 = 0;
          if (*(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar5 * 8) != 0) {
            lVar7 = *(long *)PTR_DAT_04bc0428;
            uVar5 = FUN_0277d6c4(param_1 + 0x2c8);
            uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
            if ((*(uint *)(lVar7 + 0x1d8) <= uVar5) ||
               (puVar8 = *(uint **)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar5 * 8),
               puVar8 == (uint *)0x0)) goto LAB_0142cce8;
            uVar5 = *puVar8;
            uVar6 = 0;
            if ((uVar5 != 0) && (puVar8 != (uint *)(ulong)uVar5)) {
              puVar9 = (uint *)((long)puVar8 - (long)(ulong)uVar5);
              uVar6 = 0;
              if (*puVar9 != 0) {
                uVar5 = puVar9[1];
                if ((uVar5 != 0) && ((ulong)(ushort)puVar9[2] != 0)) {
                  lVar7 = 0xc;
                  if (*(char *)((long)puVar9 + 10) != '\0') {
                    lVar7 = 0x1c;
                  }
                  lVar7 = (long)puVar9 + lVar7 + (ulong)(ushort)puVar9[2] * 8;
                  if (lVar7 != 0) {
                    uVar2 = 0;
                    if ((ulong)uVar5 != 0) {
                      uVar2 = (uint)((ulong)((long)puVar8 - lVar7) / (ulong)uVar5);
                    }
                    if (*puVar9 <= uVar2) {
                      uVar2 = 0xffffffff;
                    }
                    if ((uVar2 < DAT_05326e80) &&
                       (uVar6 = *(ushort *)(DAT_05326e88 + (long)(int)uVar2 * 2), uVar6 < 6))
                    goto LAB_0142ccec;
                  }
                }
                goto LAB_0142cce8;
              }
            }
          }
        }
        else {
LAB_0142cce8:
          uVar6 = 0;
        }
      }
LAB_0142ccec:
      *(bool *)(param_1 + 0x548) = uVar6 == 5;
      if (uVar6 != 5) {
        return;
      }
      goto LAB_0142cd08;
    }
  }
  if (*(char *)(param_1 + 0x548) == '\0') {
    return;
  }
LAB_0142cd08:
  pvVar10 = *(void **)(param_1 + 0x410);
  (**(code **)(DAT_051bbc70 + 0x18))(&DAT_051bbc70);
  pvVar4 = DAT_051bbc78;
  if (pvVar10 != DAT_051bbc78) {
    (**(code **)(DAT_051bbc70 + 0x18))(&DAT_051bbc70);
    lVar7 = 0;
    do {
      if (*(char *)((long)DAT_051bbc78 + lVar7) == '\0') goto LAB_0142cd8c;
      if (*(char *)((long)DAT_051bbc78 + lVar7 + 1) == '\0') {
        lVar7 = lVar7 + 1;
        goto LAB_0142cd8c;
      }
      if (*(char *)((long)DAT_051bbc78 + lVar7 + 2) == '\0') {
        lVar7 = lVar7 + 2;
        goto LAB_0142cd8c;
      }
      lVar7 = lVar7 + 3;
    } while (lVar7 != 0x80001);
    lVar7 = 0;
LAB_0142cd8c:
    iVar1 = (int)lVar7;
    if (*(int *)(param_1 + 0x418) <= (int)lVar7) {
      iVar1 = *(int *)(param_1 + 0x418) + -1;
    }
    memcpy(pvVar10,pvVar4,(long)iVar1);
    *(undefined1 *)((long)pvVar10 + (long)iVar1) = 0;
  }
  return;
}

