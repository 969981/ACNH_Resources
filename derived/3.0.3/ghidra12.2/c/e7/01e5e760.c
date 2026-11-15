
uint FUN_01e5e760(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  undefined4 local_84;
  undefined8 local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_48;
  undefined4 local_44;
  
  lVar8 = *(long *)(param_1 + 0x338);
  local_70 = *(undefined8 *)(lVar8 + 0x278);
  local_68 = *(undefined4 *)(lVar8 + 0x280);
  local_80 = *(undefined8 *)(lVar8 + 0x278);
  local_78 = *(undefined4 *)(lVar8 + 0x280);
  local_44 = *(undefined4 *)(lVar8 + 0x2b4);
  uVar5 = FUN_021f53e0(&local_70,&local_80,&local_44);
  if ((uVar5 & 1) != 0) {
    lVar8 = *(long *)(param_1 + 0x358);
    *(undefined1 *)(param_1 + 0x5a0) = 0;
    puVar3 = PTR_DAT_04bb2f00;
    puVar2 = PTR_DAT_04bb2ef8;
    if (*(long *)(lVar8 + 0xb0) != lVar8 + 0xa8) {
      lVar10 = (long)*(int *)(lVar8 + 0xbc);
      plVar9 = (long *)(*(long *)(lVar8 + 0xb0) - lVar10);
      puVar1 = PTR_DAT_04bb2f08 + 0x10;
      do {
        if (((*puVar3 & 1) == 0) && (iVar6 = __cxa_guard_acquire(puVar3), iVar6 != 0)) {
          *(undefined **)puVar2 = puVar1;
          __cxa_guard_release(puVar3);
        }
        if ((plVar9 != (long *)0x0) &&
           (uVar7 = (**(code **)(*plVar9 + 0x10))(plVar9,puVar2), (uVar7 & 1) != 0)) {
          *(undefined1 *)((long)plVar9 + 0x5074) = 0;
          break;
        }
        plVar9 = (long *)(*(long *)((long)plVar9 + lVar10 + 8) - lVar10);
      } while (plVar9 != (long *)((lVar8 + 0xa8) - lVar10));
    }
    uVar4 = local_44;
    *(undefined4 *)(*(long *)(param_1 + 0x358) + 0x750) = 3;
    local_48 = local_44;
    FUN_016da530(*(undefined8 *)(param_1 + 0x358),&local_80,&local_48);
    FUN_01e5e8e0(param_1,0);
    local_84 = uVar4;
    FUN_01e39520(*(undefined8 *)(param_1 + 0x358),&local_80,&local_84,0);
  }
  return uVar5 & 1;
}

