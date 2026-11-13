
undefined8 FUN_013fdc6c(undefined8 param_1,int *param_2,long param_3,long param_4)

{
  int iVar1;
  byte bVar2;
  undefined *puVar3;
  uint uVar4;
  uint uVar5;
  undefined8 uVar6;
  int iVar7;
  ulong uVar8;
  byte bVar9;
  
  puVar3 = PTR_DAT_04bb30a0;
  iVar1 = *param_2;
  if ((iVar1 - 0x8a9U < 0x32 && (1L << ((ulong)(iVar1 - 0x8a9U) & 0x3f) & 0x2800000000001U) != 0) ||
     (iVar1 == 0x148)) {
    return 1;
  }
  if (*(char *)((long)param_2 + 0xd) == '\0') {
    return 0;
  }
  uVar8 = *(ulong *)(DAT_04da6480 + 0x4060) >> 0x20;
  iVar7 = (int)(*(ulong *)(DAT_04da6480 + 0x4060) >> 0x20);
  if ((iVar7 - 4U & 0xff) < 5) {
    uVar4 = 0;
  }
  else if ((iVar7 - 9U & 0xff) < 7) {
    uVar4 = 1;
  }
  else {
    uVar4 = (uint)(4 < (iVar7 - 0x10U & 0xff)) << 1;
  }
  uVar6 = 0;
  if ((uVar4 < 3) && (bVar2 = *(byte *)(param_2 + 1), (1 << (ulong)uVar4 & (uint)bVar2) != 0)) {
    if (iVar1 == 0x8ec) {
      if (param_3 != 0) {
        uVar8 = (ulong)*(byte *)(param_3 + 4);
      }
      if (param_4 == 0) {
        bVar9 = 0x17;
      }
      else {
        bVar9 = *(byte *)(param_4 + 4);
      }
      if ((uint)bVar9 < ((uint)uVar8 & 0xff)) {
        uVar6 = 0;
      }
      else if ((bVar2 & 1) == 0) {
        if ((bVar2 >> 2 & 1) == 0) {
          if ((bVar2 >> 1 & 1) == 0) {
            do {
              uVar4 = (int)uVar8 + 1;
              uVar8 = (ulong)uVar4;
              uVar6 = 0;
            } while ((uVar4 & 0xff) <= (uint)bVar9);
          }
          else {
            do {
              uVar4 = (uint)uVar8;
              if (((0x14 < (uVar4 & 0xff)) || ((1 << (ulong)(uVar4 & 0x1f) & 0x1f01f0U) == 0)) &&
                 (((uVar4 - 9 & 0xff) < 7 &&
                  (uVar5 = FUN_00a868d0(*(undefined8 *)puVar3,uVar8), (uVar5 & 0xfffffffe) == 4))))
              goto LAB_013fdfe8;
              uVar8 = (ulong)(uVar4 + 1);
              uVar6 = 0;
            } while ((uVar4 + 1 & 0xff) <= (uint)bVar9);
          }
        }
        else if ((bVar2 >> 1 & 1) == 0) {
          do {
            uVar4 = (uint)uVar8;
            if ((((0x14 < (uVar4 & 0xff)) || ((1 << (ulong)(uVar4 & 0x1f) & 0x1f01f0U) == 0)) &&
                (6 < (uVar4 - 9 & 0xff))) &&
               (uVar5 = FUN_00a868d0(*(undefined8 *)puVar3,uVar8), (uVar5 & 0xfffffffe) == 4))
            goto LAB_013fdfe8;
            uVar8 = (ulong)(uVar4 + 1);
            uVar6 = 0;
          } while ((uVar4 + 1 & 0xff) <= (uint)bVar9);
        }
        else {
          do {
            uVar4 = (uint)uVar8;
            if (((0x14 < (uVar4 & 0xff)) || ((1 << (ulong)(uVar4 & 0x1f) & 0x1f01f0U) == 0)) &&
               (uVar5 = FUN_00a868d0(*(undefined8 *)puVar3,uVar8), (uVar5 & 0xfffffffe) == 4))
            goto LAB_013fdfe8;
            uVar8 = (ulong)(uVar4 + 1);
            uVar6 = 0;
          } while ((uVar4 + 1 & 0xff) <= (uint)bVar9);
        }
      }
      else if ((bVar2 >> 2 & 1) == 0) {
        if ((bVar2 >> 1 & 1) == 0) {
          do {
            uVar4 = (uint)uVar8;
            if ((((uVar4 & 0xff) < 0x15) && ((1 << (ulong)(uVar4 & 0x1f) & 0x1f01f0U) != 0)) &&
               (uVar5 = FUN_00a868d0(*(undefined8 *)puVar3,uVar8), (uVar5 & 0xfffffffe) == 4))
            goto LAB_013fdfe8;
            uVar8 = (ulong)(uVar4 + 1);
            uVar6 = 0;
          } while ((uVar4 + 1 & 0xff) <= (uint)bVar9);
        }
        else {
          do {
            uVar4 = (uint)uVar8;
            if (((((uVar4 & 0xff) < 0x15) && ((1 << (ulong)(uVar4 & 0x1f) & 0x1f01f0U) != 0)) ||
                ((uVar4 - 9 & 0xff) < 7)) &&
               (uVar5 = FUN_00a868d0(*(undefined8 *)puVar3,uVar8), (uVar5 & 0xfffffffe) == 4))
            goto LAB_013fdfe8;
            uVar8 = (ulong)(uVar4 + 1);
            uVar6 = 0;
          } while ((uVar4 + 1 & 0xff) <= (uint)bVar9);
        }
      }
      else if ((bVar2 >> 1 & 1) == 0) {
        do {
          uVar4 = (uint)uVar8;
          if (((((uVar4 & 0xff) < 0x15) && ((1 << (ulong)(uVar4 & 0x1f) & 0x1f01f0U) != 0)) ||
              (6 < (uVar4 - 9 & 0xff))) &&
             (uVar5 = FUN_00a868d0(*(undefined8 *)puVar3,uVar8), (uVar5 & 0xfffffffe) == 4))
          goto LAB_013fdfe8;
          uVar8 = (ulong)(uVar4 + 1);
          uVar6 = 0;
        } while ((uVar4 + 1 & 0xff) <= (uint)bVar9);
      }
      else {
        do {
          uVar5 = (uint)uVar8;
          uVar4 = uVar5 & 0xff;
          if (uVar4 < 0x15) {
            uVar4 = 1 << (ulong)(uVar5 & 0x1f);
          }
          uVar4 = FUN_00a868d0(uVar4,*(undefined8 *)puVar3,uVar8);
          if ((uVar4 & 0xfffffffe) == 4) goto LAB_013fdfe8;
          uVar8 = (ulong)(uVar5 + 1);
          uVar6 = 0;
        } while ((uVar5 + 1 & 0xff) <= (uint)bVar9);
      }
    }
    else {
LAB_013fdfe8:
      uVar6 = 1;
    }
  }
  return uVar6;
}

