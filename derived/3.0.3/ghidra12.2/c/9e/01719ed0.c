
uint FUN_01719ed0(long *param_1,undefined8 param_2)

{
  char cVar1;
  undefined *puVar2;
  uint uVar3;
  undefined8 *puVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  uint *puVar8;
  ulong uVar9;
  uint uVar10;
  uint uVar11;
  undefined *local_88;
  undefined8 *local_80;
  undefined *local_78;
  undefined8 *local_70;
  undefined8 *local_68;
  
  uVar6 = FUN_03eaa1d8(param_2,&local_68);
  puVar2 = PTR_DAT_04bb2020;
  if ((uVar6 & 1) != 0) {
    local_78 = PTR_DAT_04bb2020 + 0x10;
    local_70 = local_68;
    if (((DAT_05146ec0 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_05146ec0), iVar7 != 0)) {
      FUN_011eb5f0(&DAT_05146eb0);
      __cxa_guard_release(&DAT_05146ec0);
    }
    uVar3 = DAT_05146eb0;
    if (DAT_05146eb0 != 0) {
      uVar10 = 0;
      do {
        local_80 = &DAT_0407ebb1;
        if (uVar10 < 0xe) {
          local_80 = (undefined8 *)(&PTR_DAT_049be4c8)[uVar10];
        }
        local_88 = puVar2 + 0x10;
        (**(code **)(local_78 + 0x18))(&local_78);
        (**(code **)(local_78 + 0x18))(&local_78);
        puVar4 = local_70;
        (**(code **)(local_88 + 0x18))(&local_88);
        if (puVar4 == local_80) {
LAB_0171a04c:
          puVar8 = (uint *)(**(code **)(*param_1 + 0xf0))(param_1);
          *puVar8 = uVar10;
          break;
        }
        uVar9 = 0;
        bVar5 = true;
        do {
          if (*(char *)((long)local_70 + uVar9) != *(char *)((long)local_80 + uVar9)) break;
          if (*(char *)((long)local_70 + uVar9) == '\0') {
            if (bVar5) goto LAB_0171a04c;
            break;
          }
          cVar1 = *(char *)((long)local_70 + uVar9 + 1);
          if (cVar1 != *(char *)((long)local_80 + uVar9 + 1)) break;
          if (cVar1 == '\0') goto LAB_0171a04c;
          cVar1 = *(char *)((long)local_70 + uVar9 + 2);
          if (cVar1 != *(char *)((long)local_80 + uVar9 + 2)) break;
          if (cVar1 == '\0') goto LAB_0171a04c;
          bVar5 = uVar9 < 0x7fffe;
          uVar9 = uVar9 + 3;
        } while (uVar9 != 0x80001);
        uVar11 = 0xd;
        if ((int)uVar10 < 0xe) {
          uVar11 = uVar10 + 1;
        }
        uVar10 = uVar11;
      } while (uVar11 != uVar3);
    }
  }
  return uVar6 & 1;
}

