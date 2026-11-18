
/* WARNING: Removing unreachable block (ram,0x037736a0) */

bool FUN_03773640(void)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined *local_30;
  char *pcStack_28;
  
  local_30 = PTR_DAT_04bb2020 + 0x10;
  pcStack_28 = "SeqShareHouseOngoing";
  iVar2 = FUN_02758850(&local_30);
  if ((iVar2 != 0) && (lVar5 = *(long *)PTR_DAT_04bb46b0, lVar5 != 0)) {
    local_30 = (undefined *)CONCAT44(local_30._4_4_,1);
    if ((((*(byte *)(lVar5 + 0x50d) ^ 0xff) & 6) == 0) &&
       (lVar5 = (**(code **)(**(long **)(*(long *)(lVar5 + 0x10) + 0x188) + 0x38))(), lVar5 != 0)) {
      if ((*(long **)(lVar5 + 0x36620) == (long *)0x0) ||
         (puVar4 = (undefined8 *)**(long **)(lVar5 + 0x36620), puVar4 == (undefined8 *)0x0)) {
        uVar3 = 1;
      }
      else {
        uVar3 = (**(code **)*puVar4)();
        uVar3 = uVar3 ^ 1;
      }
      iVar2 = (int)*(char *)(*(long *)(lVar5 + 0x36608) + *(long *)(lVar5 + 0x36600));
      local_30 = (undefined *)CONCAT44(local_30._4_4_,iVar2);
      bVar1 = iVar2 == 0;
      if ((uVar3 & 1) != 0) {
        return bVar1;
      }
      if (*(long *)(lVar5 + 0x36620) == 0) {
        return bVar1;
      }
      puVar4 = *(undefined8 **)(*(long *)(lVar5 + 0x36620) + 8);
      if (puVar4 == (undefined8 *)0x0) {
        return bVar1;
      }
      (**(code **)*puVar4)();
      return bVar1;
    }
  }
  return false;
}

