
void FUN_026eff04(long param_1,uint param_2)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined *local_48;
  char *pcStack_40;
  uint local_34;
  
  if ((*(byte *)(param_1 + 0x453) & 1) != 0) {
    return;
  }
  local_34 = param_2;
  lVar4 = (**(code **)(*(long *)**(undefined8 **)(param_1 + 0x10) + 0x38))();
  if (lVar4 == 0) {
    return;
  }
  if ((*(long **)(lVar4 + 0x98) == (long *)0x0) ||
     (puVar5 = (undefined8 *)**(long **)(lVar4 + 0x98), puVar5 == (undefined8 *)0x0)) {
    uVar2 = 1;
  }
  else {
    uVar2 = (**(code **)*puVar5)();
    uVar2 = uVar2 ^ 1;
  }
  if (param_2 < 8) {
    lVar6 = *(long *)(lVar4 + 0x80) + *(long *)(lVar4 + 0x78) + (ulong)param_2 * 0x48;
    bVar1 = *(long *)(lVar6 + 0x1e33b0) != 0 || *(long *)(lVar6 + 0x1e33b8) != 0;
  }
  else {
    bVar1 = false;
  }
  if ((((uVar2 & 1) == 0) && (*(long *)(lVar4 + 0x98) != 0)) &&
     (puVar5 = *(undefined8 **)(*(long *)(lVar4 + 0x98) + 8), puVar5 != (undefined8 *)0x0)) {
    (**(code **)*puVar5)();
  }
  if (bVar1) {
    local_48 = PTR_DAT_04bb2020 + 0x10;
    pcStack_40 = "MakeVillagePlayerFlag";
    iVar3 = FUN_0274ce10(&local_34,&local_48);
    if (iVar3 == 0) {
      *(uint *)(param_1 + 0x4d8) = param_2;
    }
  }
  return;
}

