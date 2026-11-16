
/* WARNING: Removing unreachable block (ram,0x02687744) */

void FUN_02687700(void)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  void *pvVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined **local_7b0;
  undefined8 local_7a8;
  undefined8 uStack_7a0;
  uint local_54;
  uint local_50;
  uint local_4c;
  int local_48;
  
  if (DAT_05574040 == 0) {
    return;
  }
  local_7b0 = (undefined **)CONCAT44(local_7b0._4_4_,1);
  if (((*(byte *)(DAT_05574040 + 0x50d) ^ 0xff) & 6) != 0) {
    return;
  }
  lVar3 = (**(code **)(**(long **)(*(long *)(DAT_05574040 + 0x10) + 0x188) + 0x30))();
  if (lVar3 == 0) {
    return;
  }
  lVar8 = *(long *)(&LAB_005d3e98 + lVar3);
  if (lVar8 == 0) {
    uVar4 = 0;
  }
  else {
    if (*(undefined8 **)(lVar8 + 0x10) == (undefined8 *)0x0) {
      uVar4 = 0;
      plVar5 = *(long **)(lVar8 + 0x20);
    }
    else {
      uVar4 = (**(code **)**(undefined8 **)(lVar8 + 0x10))();
      uVar4 = uVar4 & 0xffffffff;
      if (*(long *)(&LAB_005d3e98 + lVar3) == 0) goto LAB_026877e0;
      plVar5 = *(long **)(*(long *)(&LAB_005d3e98 + lVar3) + 0x20);
    }
    if (plVar5 != (long *)0x0) {
      local_7b0 = *(undefined ***)(&LAB_005d3e78 + lVar3);
      local_7a8 = *(undefined8 *)(&LAB_005d3e80 + lVar3);
      uStack_7a0 = 0x754;
      (**(code **)(*plVar5 + 0x20))(plVar5,&local_7b0);
    }
  }
LAB_026877e0:
  lVar8 = *(long *)(&LAB_005d3e78 + lVar3);
  lVar1 = *(long *)(&LAB_005d3e80 + lVar3);
  local_7b0 = &PTR_LAB_049ff3a8;
  memset(&local_7a8,0,0x754);
  uVar2 = nn::os::GetSystemTick();
  local_54 = (uVar2 ^ uVar2 >> 0x1e) * 0x6c078965 + 1;
  local_50 = (local_54 ^ local_54 >> 0x1e) * 0x6c078965 + 2;
  local_4c = (local_50 ^ local_50 >> 0x1e) * 0x6c078965 + 3;
  local_48 = (local_4c ^ local_4c >> 0x1e) * 0x6c078965 + 4;
  pvVar6 = (void *)FUN_01a451fc(&local_7b0);
  memset(pvVar6,0,0x754);
  pvVar6 = (void *)(*(code *)local_7b0[3])(&local_7b0);
  memset(pvVar6,0,0x754);
  memcpy((void *)(lVar1 + lVar8),&local_7a8,0x754);
  if ((((uVar4 & 1) != 0) && (*(long *)(&LAB_005d3e98 + lVar3) != 0)) &&
     (puVar7 = *(undefined8 **)(*(long *)(&LAB_005d3e98 + lVar3) + 0x18),
     puVar7 != (undefined8 *)0x0)) {
    (**(code **)*puVar7)();
  }
  return;
}

