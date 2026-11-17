
int FUN_02c7eeac(long param_1,undefined4 *param_2)

{
  bool bVar1;
  uint uVar2;
  undefined *puVar3;
  byte bVar4;
  uint uVar5;
  long lVar6;
  ushort uVar7;
  int iVar8;
  undefined8 *puVar9;
  uint *puVar10;
  uint *puVar11;
  long lVar12;
  undefined1 auStack_78 [24];
  undefined **local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined8 local_50;
  
  FUN_02645730(auStack_78,param_1 + 0x1f8);
  if (DAT_05574040 == 0) {
LAB_02c7ef54:
    bVar1 = false;
  }
  else {
    puVar9 = *(undefined8 **)(DAT_05574040 + 0x10);
    if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
      lVar6 = (**(code **)(*(long *)*puVar9 + 0x38))();
      if (lVar6 == 0) goto LAB_02c7ef54;
      lVar6 = lVar6 + 0x70;
LAB_02c7ef30:
      if ((*(long **)(lVar6 + 0x28) == (long *)0x0) ||
         (puVar9 = (undefined8 *)**(long **)(lVar6 + 0x28), puVar9 == (undefined8 *)0x0)) {
        uVar5 = 1;
      }
      else {
        uVar5 = (**(code **)*puVar9)();
        uVar5 = uVar5 ^ 1;
      }
      lVar12 = *(long *)(lVar6 + 0x10) + *(long *)(lVar6 + 8);
      bVar4 = *(long *)(lVar12 + 0x1e33b0) != 0 || *(long *)(lVar12 + 0x1e33b8) != 0;
      if (*(long *)(lVar12 + 0x1e33f8) != 0 || *(long *)(lVar12 + 0x1e3400) != 0) {
        bVar4 = bVar4 + 1;
      }
      if (*(long *)(lVar12 + 0x1e3440) != 0 || *(long *)(lVar12 + 0x1e3448) != 0) {
        bVar4 = bVar4 + 1;
      }
      if (*(long *)(lVar12 + 0x1e3488) != 0 || *(long *)(lVar12 + 0x1e3490) != 0) {
        bVar4 = bVar4 + 1;
      }
      if (*(long *)(lVar12 + 0x1e34d0) != 0 || *(long *)(lVar12 + 0x1e34d8) != 0) {
        bVar4 = bVar4 + 1;
      }
      if (*(long *)(lVar12 + 0x1e3518) != 0 || *(long *)(lVar12 + 0x1e3520) != 0) {
        bVar4 = bVar4 + 1;
      }
      if (*(long *)(lVar12 + 0x1e3560) != 0 || *(long *)(lVar12 + 0x1e3568) != 0) {
        bVar4 = bVar4 + 1;
      }
      if (*(long *)(lVar12 + 0x1e35a8) != 0 || *(long *)(lVar12 + 0x1e35b0) != 0) {
        bVar4 = bVar4 + 1;
      }
      if ((((uVar5 & 1) == 0) && (*(long *)(lVar6 + 0x28) != 0)) &&
         (puVar9 = *(undefined8 **)(*(long *)(lVar6 + 0x28) + 8), puVar9 != (undefined8 *)0x0)) {
        (**(code **)*puVar9)();
      }
      bVar1 = 1 < bVar4;
    }
    else {
      if ((puVar9 == (undefined8 *)0x0) || ((long *)puVar9[0x26] == (long *)0x0)) goto LAB_02c7ef54;
      lVar6 = (**(code **)(*(long *)puVar9[0x26] + 0x38))();
      bVar1 = false;
      if (lVar6 != 0) goto LAB_02c7ef30;
    }
  }
  puVar3 = PTR_DAT_04bb43c0;
  lVar12 = *(long *)PTR_DAT_04bb43c0;
  uVar5 = FUN_0277d6c4(param_2);
  lVar6 = *(long *)puVar3;
  if (lVar6 != 0) {
    lVar12 = *(long *)(lVar12 + 0x57e58);
    uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
    if ((uVar5 < *(uint *)(lVar12 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) {
      local_50 = 0;
      local_58 = *param_2;
      uStack_54 = param_2[1];
      local_60 = &PTR_FUN_04a36b50;
      uVar5 = FUN_0277d6c4(&local_58);
      if (*(long *)puVar3 == 0) {
LAB_02c7f194:
        uVar7 = 0xbc;
      }
      else {
        lVar6 = *(long *)(lVar6 + 0x57e58);
        uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar6 + 0x1f8);
        if ((*(uint *)(lVar6 + 0x1d8) <= uVar5) ||
           (*(long *)(*(long *)(lVar6 + 0x1e0) + (long)(int)uVar5 * 8) == 0)) goto LAB_02c7f194;
        lVar6 = *(long *)PTR_DAT_04bc0428;
        uVar5 = FUN_0277d6c4(param_2);
        uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar6 + 0x1f8);
        if ((*(uint *)(lVar6 + 0x1d8) <= uVar5) ||
           (puVar10 = *(uint **)(*(long *)(lVar6 + 0x1e0) + (long)(int)uVar5 * 8),
           puVar10 == (uint *)0x0)) goto LAB_02c7f194;
        uVar7 = 0;
        uVar5 = *puVar10;
        if ((uVar5 != 0) && (puVar10 != (uint *)(ulong)uVar5)) {
          puVar11 = (uint *)((long)puVar10 - (long)(ulong)uVar5);
          uVar7 = 0;
          if (*puVar11 != 0) {
            uVar5 = puVar11[1];
            if ((uVar5 != 0) && ((ulong)(ushort)puVar11[2] != 0)) {
              lVar6 = 0xc;
              if (*(char *)((long)puVar11 + 10) != '\0') {
                lVar6 = 0x1c;
              }
              lVar6 = (long)puVar11 + lVar6 + (ulong)(ushort)puVar11[2] * 8;
              if (lVar6 != 0) {
                uVar2 = 0;
                if ((ulong)uVar5 != 0) {
                  uVar2 = (uint)((ulong)((long)puVar10 - lVar6) / (ulong)uVar5);
                }
                if (*puVar11 <= uVar2) {
                  uVar2 = 0xffffffff;
                }
                if ((uVar2 < DAT_05326ec0) &&
                   (uVar7 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar2 * 2), uVar7 < 0xbd))
                goto LAB_02c7f1a0;
              }
            }
            uVar7 = 0;
          }
        }
      }
LAB_02c7f1a0:
      if (uVar7 == 0x61) {
        if (*(char *)(param_1 + 0x97cd8) != '\0') {
          bVar1 = true;
        }
        iVar8 = 5;
        goto LAB_02c7f1f0;
      }
    }
  }
  if (*(char *)(param_1 + 0x97cd8) != '\0') {
    bVar1 = true;
  }
  iVar8 = 3;
LAB_02c7f1f0:
  if (bVar1) {
    iVar8 = iVar8 + 1;
  }
  return iVar8;
}

