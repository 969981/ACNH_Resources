
void FUN_02fcf654(long param_1)

{
  undefined *puVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined *local_68;
  undefined4 local_60;
  undefined1 local_5c;
  undefined2 local_5b;
  undefined4 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined *local_40;
  char *local_38;
  
  local_60 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
  local_5b = 0xff00;
  local_5c = 1;
  local_58 = 0xffffffff;
  local_50 = 0;
  uStack_48 = 0;
  local_68 = PTR_DAT_04bc5768 + 0x10;
  puVar6 = (undefined8 *)**(undefined8 **)(*(long *)(param_1 + 0x210) + 0x3f8);
  if (((*PTR_DAT_04bc4e60 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_04bc4e60), iVar2 != 0))
  {
    *(undefined **)PTR_DAT_04bc4e58 = PTR_DAT_04bc4d38 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc4e60);
  }
  if (puVar6 == (undefined8 *)0x0) {
    puVar6 = (undefined8 *)0x0;
  }
  else {
    uVar3 = (**(code **)*puVar6)(puVar6,PTR_DAT_04bc4e58);
    if ((uVar3 & 1) == 0) {
      puVar6 = (undefined8 *)0x0;
    }
  }
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  local_38 = "/L_MsgCard_00";
  local_40 = puVar1;
  local_50 = FUN_02c22508(puVar6 + 7,&local_40);
  local_38 = "MsgCardViewSeq";
  local_40 = puVar1;
  lVar4 = FUN_02c1b24c(*(undefined8 *)(param_1 + 0x98),&local_40,param_1,&local_68);
  *(long *)(param_1 + 0x218) = lVar4;
  puVar1 = PTR_DAT_04bc0cb8;
  if ((lVar4 != 0) && (lVar4 = *(long *)(lVar4 + 0x288), lVar4 != 0)) {
    plVar5 = *(long **)(lVar4 + 0x290);
    if (plVar5 != (long *)0x0) {
      local_40 = PTR_DAT_04bc0cb8 + 0x10;
      local_38 = (char *)CONCAT44(local_38._4_4_,0x1f);
      (**(code **)(*plVar5 + 0x20))(plVar5,&local_40);
      (**(code **)(plVar5[3] + 0x210))(lVar4 + 0x2d0,plVar5[1],0,0);
    }
    plVar5 = *(long **)(lVar4 + 0x288);
    if (plVar5 != (long *)0x0) {
      local_40 = puVar1 + 0x10;
      local_38 = (char *)CONCAT44(local_38._4_4_,0x1f);
      (**(code **)(*plVar5 + 0x20))(plVar5,&local_40);
      (**(code **)(plVar5[3] + 0x210))(lVar4 + 0x2f0,plVar5[1],0,0);
    }
  }
  return;
}

