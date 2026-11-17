
undefined8 FUN_02f041a0(undefined8 *param_1)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  char cVar5;
  undefined8 *puVar6;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined *local_38;
  undefined8 *puStack_30;
  undefined4 local_28;
  
  lVar4 = 0;
  cVar5 = '/';
  do {
    if ((*(char *)(param_1[5] + lVar4) != cVar5) ||
       (*(char *)(param_1[5] + lVar4 + 1) != "/L_MiniGameCounter_00/L_Counter_"[lVar4 + 1]))
    goto LAB_02f042b0;
    cVar5 = "/L_MiniGameCounter_00/L_Counter_"[lVar4 + 2];
    lVar4 = lVar4 + 2;
  } while (lVar4 != 0x20);
  puVar6 = (undefined8 *)param_1[1];
  if (((*PTR_DAT_04bc4ff0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_04bc4ff0), iVar1 != 0))
  {
    *(undefined **)PTR_DAT_04bc4fe8 = PTR_DAT_04bc4e48 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc4ff0);
  }
  if ((puVar6 == (undefined8 *)0x0) ||
     (uVar2 = (**(code **)*puVar6)(puVar6,PTR_DAT_04bc4fe8), (uVar2 & 1) == 0)) {
LAB_02f042b0:
    uVar3 = 0;
  }
  else {
    if (((DAT_056b81b0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056b81b0), iVar1 != 0)) {
      DAT_056b8130 = PTR_DAT_04bb2020 + 0x10;
      DAT_056b8138 = "TexPattern";
      DAT_056b8148 = &DAT_0407ebb1;
      DAT_056b8168 = &DAT_0407ebb1;
      DAT_056b8158 = "SpAttack";
      DAT_056b8178 = "SpState";
      DAT_056b8188 = &DAT_0407ebb1;
      DAT_056b8198 = "Attack";
      DAT_056b81a8 = &DAT_0407ebb1;
      DAT_056b8140 = DAT_056b8130;
      DAT_056b8150 = DAT_056b8130;
      DAT_056b8160 = DAT_056b8130;
      DAT_056b8170 = DAT_056b8130;
      DAT_056b8180 = DAT_056b8130;
      DAT_056b8190 = DAT_056b8130;
      DAT_056b81a0 = DAT_056b8130;
      __cxa_guard_release(&DAT_056b81b0);
    }
    if (((DAT_056b81c8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056b81c8), iVar1 != 0)) {
      DAT_056b81b8 = 0x400000002;
      DAT_056b81c0 = &DAT_056b8130;
      __cxa_guard_release(&DAT_056b81c8);
    }
    if (((DAT_056b81e0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056b81e0), iVar1 != 0)) {
      DAT_056b81d0 = PTR_DAT_04bb2020 + 0x10;
      DAT_056b81d8 = "@T_Num_00";
      __cxa_guard_release(&DAT_056b81e0);
    }
    local_28 = 0;
    local_40 = 0;
    local_38 = &DAT_04ae03a0;
    puStack_30 = &DAT_056b81b8;
    uStack_48 = *param_1;
    local_50 = *(undefined8 *)PTR_PTR_04bc4e50;
    FUN_0386e230(puVar6[2] + 0x208,puVar6[2],&local_50);
    uVar3 = 1;
  }
  return uVar3;
}

