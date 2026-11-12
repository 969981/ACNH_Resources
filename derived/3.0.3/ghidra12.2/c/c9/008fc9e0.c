
void FUN_008fc9e0(long param_1,byte *param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  ulong uVar5;
  undefined8 uVar6;
  byte bVar7;
  undefined4 uVar8;
  long lVar9;
  long *plVar10;
  
  if (((((*(char *)(param_1 + 0x430) == '\0') && (*(long *)PTR_DAT_04bb27c0 != 0)) &&
       (uVar1 = *(uint *)(param_1 + 0x274), uVar1 != 0)) &&
      ((plVar10 = *(long **)(*(long *)(*(long *)(*(long *)PTR_DAT_04bb27c0 + 0x1c0) + 8) +
                            ((ulong)(uVar1 >> 0x11) & 0x7ff8)), plVar10 != (long *)0x0 &&
       ((*(uint *)(plVar10 + 0x49) >> 1 & 1) == 0)))) && (*(uint *)(plVar10 + 0x46) == uVar1)) {
    if (((*PTR_DAT_04bb32c0 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_04bb32c0), iVar4 != 0)) {
      *(undefined **)PTR_DAT_04bb32b8 = PTR_DAT_04bb32c8 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb32c0);
    }
    uVar5 = (**(code **)(*plVar10 + 0x20))(plVar10,PTR_DAT_04bb32b8);
    if ((uVar5 & 1) != 0) {
      bVar7 = *param_2;
      FUN_008c3440(plVar10,(int)plVar10[0x82]);
      puVar3 = PTR_DAT_04bb5988;
      puVar2 = PTR_FUN_04bb5878;
      if (*(int *)(*(long *)PTR_DAT_04bb39b0 + 0x15c) == 0) {
        if (7 < bVar7) {
          bVar7 = 0xff;
        }
        *(byte *)(plVar10 + 0x6137) = bVar7;
        uVar6 = 2;
        plVar10[0x6feb] = (long)(puVar3 + 0x10);
        uVar8 = 10;
      }
      else {
        if ((int)plVar10[0x6210] != 0) {
          *(undefined4 *)(plVar10 + 0x6100) = 1;
          plVar10[0x6fed] = (long)puVar2;
          plVar10[0x6fee] = 0;
          plVar10[0x6feb] = (long)(PTR_DAT_04bb5980 + 0x10);
          plVar10[0x6fec] = (long)plVar10;
          lVar9 = *(long *)(plVar10[0x6211] + (long)((int)plVar10[0x6210] + -1) * 8);
          if (lVar9 != 0) {
            *(undefined1 *)(lVar9 + 4) = 1;
          }
        }
        uVar6 = 8;
        if (7 < bVar7) {
          bVar7 = 0xff;
        }
        *(byte *)(plVar10 + 0x6137) = bVar7;
        uVar8 = (undefined4)plVar10[0x60fd];
      }
      *(undefined4 *)((long)plVar10 + 0x307e4) = uVar8;
      *(undefined4 *)((long)plVar10 + 0x307ec) = 8;
      FUN_03ebb160(plVar10 + 0x81,uVar6);
      return;
    }
  }
  return;
}

