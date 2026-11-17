
void FUN_03152d40(long param_1,undefined4 param_2)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined *local_68;
  long local_60;
  undefined8 uStack_58;
  long local_50;
  undefined8 uStack_48;
  undefined *local_40;
  char *pcStack_38;
  
  if (*(long *)(param_1 + 0x350) != 0) {
    puVar5 = (undefined8 *)**(undefined8 **)(*(long *)(param_1 + 0x210) + 0x3f8);
    if (((*PTR_DAT_04bc4e60 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_04bc4e60), iVar1 != 0)) {
      *(undefined **)PTR_DAT_04bc4e58 = PTR_DAT_04bc4d38 + 0x10;
      __cxa_guard_release(PTR_DAT_04bc4e60);
    }
    if (((puVar5 != (undefined8 *)0x0) &&
        (uVar2 = (**(code **)*puVar5)(puVar5,PTR_DAT_04bc4e58), (uVar2 & 1) != 0)) &&
       (plVar6 = *(long **)puVar5[0x41], plVar6 != (long *)0x0)) {
      local_68 = PTR_DAT_04bc0cb8 + 0x10;
      local_60 = CONCAT44(local_60._4_4_,0x55);
      (**(code **)(*plVar6 + 0x20))(plVar6,&local_68);
      uVar3 = (**(code **)(plVar6[3] + 0x570))(plVar6[1]);
      lVar4 = *(long *)PTR_DAT_04bb48d0;
      if (lVar4 != 0) {
        *(undefined8 *)(param_1 + 0x318) = uVar3;
        *(undefined8 *)(param_1 + 0x328) = 0x64000;
        *(undefined4 *)(param_1 + 0x338) = param_2;
        local_60 = param_1 + 0x2c8;
        *(undefined8 *)(param_1 + 0x330) = 0xffffffff;
        *(undefined4 *)(param_1 + 0x33c) = 0;
        *(undefined8 *)(param_1 + 800) = *(undefined8 *)(param_1 + 0x350);
        local_50 = param_1 + 0x2e8;
        local_68 = (undefined *)CONCAT44(local_68._4_4_,1);
        local_40 = PTR_DAT_04bb2020 + 0x10;
        uStack_58 = 0;
        uStack_48 = 0;
        pcStack_38 = "Game::UI::AsyncWorker";
        FUN_0082ce90(lVar4,&local_68);
        *(undefined1 *)(param_1 + 0x348) = 0;
      }
    }
  }
  return;
}

