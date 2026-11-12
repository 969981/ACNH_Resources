
void FUN_008fce24(long param_1,byte *param_2)

{
  uint uVar1;
  undefined *puVar2;
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  byte bVar6;
  undefined4 uVar7;
  long lVar8;
  long *plVar9;
  
  if (((((*(char *)(param_1 + 0x430) == '\0') && (*(long *)PTR_DAT_04bb27c0 != 0)) &&
       (uVar1 = *(uint *)(param_1 + 0x274), uVar1 != 0)) &&
      ((plVar9 = *(long **)(*(long *)(*(long *)(*(long *)PTR_DAT_04bb27c0 + 0x1c0) + 8) +
                           ((ulong)(uVar1 >> 0x11) & 0x7ff8)), plVar9 != (long *)0x0 &&
       ((*(uint *)(plVar9 + 0x49) >> 1 & 1) == 0)))) && (*(uint *)(plVar9 + 0x46) == uVar1)) {
    if (((*PTR_DAT_04bb32c0 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_04bb32c0), iVar3 != 0)) {
      *(undefined **)PTR_DAT_04bb32b8 = PTR_DAT_04bb32c8 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb32c0);
    }
    uVar4 = (**(code **)(*plVar9 + 0x20))(plVar9,PTR_DAT_04bb32b8);
    if ((uVar4 & 1) != 0) {
      bVar6 = *param_2;
      FUN_008c3440(plVar9,(int)plVar9[0x82]);
      puVar2 = PTR_FUN_04bb5878;
      if (*(int *)(*(long *)PTR_DAT_04bb39b0 + 0x15c) == 0) {
        uVar5 = 4;
        if (7 < bVar6) {
          bVar6 = 0xff;
        }
        *(byte *)(plVar9 + 0x6137) = bVar6;
        uVar7 = 0xe;
      }
      else {
        if ((int)plVar9[0x6210] != 0) {
          *(undefined4 *)(plVar9 + 0x6100) = 2;
          plVar9[0x6fed] = (long)puVar2;
          plVar9[0x6fee] = 0;
          plVar9[0x6feb] = (long)(PTR_DAT_04bb5980 + 0x10);
          plVar9[0x6fec] = (long)plVar9;
          lVar8 = *(long *)(plVar9[0x6211] + (long)((int)plVar9[0x6210] + -1) * 8);
          if (lVar8 != 0) {
            *(undefined1 *)(lVar8 + 4) = 1;
          }
        }
        uVar5 = 8;
        if (7 < bVar6) {
          bVar6 = 0xff;
        }
        *(byte *)(plVar9 + 0x6137) = bVar6;
        uVar7 = (undefined4)plVar9[0x60fd];
      }
      *(undefined4 *)((long)plVar9 + 0x307e4) = uVar7;
      *(undefined4 *)((long)plVar9 + 0x307ec) = 8;
      FUN_03ebb160(plVar9 + 0x81,uVar5);
      return;
    }
  }
  return;
}

