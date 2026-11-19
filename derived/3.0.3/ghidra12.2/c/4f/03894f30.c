
undefined8 FUN_03894f30(long *param_1,byte *param_2)

{
  int iVar1;
  undefined *puVar2;
  char cVar3;
  long *plVar4;
  uint *puVar5;
  long lVar6;
  long lVar7;
  undefined1 *puVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  undefined1 local_78 [4];
  undefined1 local_74 [4];
  undefined1 local_70 [4];
  undefined1 local_6c [4];
  undefined1 local_68 [4];
  undefined1 local_64 [4];
  
  puVar2 = PTR_DAT_04bcb7d8;
  plVar4 = *(long **)(*(long *)PTR_DAT_04bcb7d8 + 0x68);
  plVar9 = *(long **)(plVar4[0x1f] + 0x50);
  iVar1 = *(int *)(plVar4[0x1f] + 0x48);
  if (*param_2 < 0x20) {
    if (iVar1 != 0) {
      lVar10 = *(long *)PTR_DAT_04bb29d0;
      lVar11 = (long)iVar1 << 3;
      do {
        local_74[0] = *(undefined1 *)(*plVar9 + 0x21);
        puVar5 = (uint *)(**(code **)(*param_1 + 0x110))(param_1,local_74);
        if ((*puVar5 >> (ulong)(*param_2 & 0x1f) & 1) != 0) {
          lVar6 = (**(code **)(*param_1 + 0xe0))(param_1,local_74);
          lVar7 = nn::os::GetSystemTick();
          lVar7 = lVar7 - lVar6;
          if (lVar7 + 0x20c49ba5e353f7U < 0x4189374bc6a7ee) {
            lVar6 = 0;
            if (lVar10 != 0) {
              lVar6 = (lVar7 * 1000) / lVar10;
            }
          }
          else {
            lVar6 = 0;
            if (lVar10 != 0) {
              lVar6 = lVar7 / lVar10;
            }
            lVar6 = lVar6 * 1000;
          }
          if (lVar6 < 1000) {
            return 1;
          }
        }
        plVar9 = plVar9 + 1;
        lVar11 = lVar11 + -8;
      } while (lVar11 != 0);
      plVar4 = *(long **)(*(long *)puVar2 + 0x68);
    }
    cVar3 = (**(code **)(*plVar4 + 0x1a0))();
    if (cVar3 == -1) {
      return 0;
    }
    local_78[0] = (**(code **)(**(long **)(*(long *)puVar2 + 0x68) + 0x1a0))();
    puVar5 = (uint *)(**(code **)(*param_1 + 0x110))(param_1,local_78);
    if ((*puVar5 >> (ulong)(*param_2 & 0x1f) & 1) == 0) {
      return 0;
    }
    lVar11 = *param_1;
    puVar8 = local_78;
  }
  else {
    if (iVar1 != 0) {
      lVar10 = *(long *)PTR_DAT_04bb29d0;
      lVar11 = (long)iVar1 << 3;
      do {
        local_64[0] = *(undefined1 *)(*plVar9 + 0x21);
        lVar6 = (**(code **)(*param_1 + 0x110))(param_1,local_64);
        if ((*(uint *)(lVar6 + 4) >> (ulong)(*param_2 - 0xfd & 0x1f) & 1) != 0) {
          local_68[0] = *(undefined1 *)(*plVar9 + 0x21);
          lVar6 = (**(code **)(*param_1 + 0xe0))(param_1,local_68);
          lVar7 = nn::os::GetSystemTick();
          lVar7 = lVar7 - lVar6;
          if (lVar7 + 0x20c49ba5e353f7U < 0x4189374bc6a7ee) {
            lVar6 = 0;
            if (lVar10 != 0) {
              lVar6 = (lVar7 * 1000) / lVar10;
            }
          }
          else {
            lVar6 = 0;
            if (lVar10 != 0) {
              lVar6 = lVar7 / lVar10;
            }
            lVar6 = lVar6 * 1000;
          }
          if (lVar6 < 1000) {
            return 1;
          }
        }
        plVar9 = plVar9 + 1;
        lVar11 = lVar11 + -8;
      } while (lVar11 != 0);
      plVar4 = *(long **)(*(long *)puVar2 + 0x68);
    }
    cVar3 = (**(code **)(*plVar4 + 0x1a0))();
    if (cVar3 == -1) {
      return 0;
    }
    local_6c[0] = (**(code **)(**(long **)(*(long *)puVar2 + 0x68) + 0x1a0))();
    lVar11 = (**(code **)(*param_1 + 0x110))(param_1,local_6c);
    if ((*(uint *)(lVar11 + 4) >> (ulong)(*param_2 - 0xfd & 0x1f) & 1) == 0) {
      return 0;
    }
    local_70[0] = (**(code **)(**(long **)(*(long *)puVar2 + 0x68) + 0x1a0))();
    lVar11 = *param_1;
    puVar8 = local_70;
  }
  lVar11 = (**(code **)(lVar11 + 0xe0))(param_1,puVar8);
  lVar10 = nn::os::GetSystemTick();
  lVar10 = lVar10 - lVar11;
  if (lVar10 + 0x20c49ba5e353f7U < 0x4189374bc6a7ee) {
    lVar11 = 0;
    if (*(long *)PTR_DAT_04bb29d0 != 0) {
      lVar11 = (lVar10 * 1000) / *(long *)PTR_DAT_04bb29d0;
    }
  }
  else {
    lVar11 = 0;
    if (DAT_05ae7888 != 0) {
      lVar11 = lVar10 / DAT_05ae7888;
    }
    lVar11 = lVar11 * 1000;
  }
  if (lVar11 < 1000) {
    return 1;
  }
  return 0;
}

