
void FUN_03110f64(long param_1)

{
  undefined *puVar1;
  undefined4 *puVar2;
  long *plVar3;
  undefined4 uVar4;
  undefined *local_40;
  char *local_38;
  long local_18;
  
  FUN_03d66690();
  puVar1 = PTR_DAT_04bc0cb8;
  plVar3 = *(long **)(param_1 + 0x278);
  if ((plVar3 != (long *)0x0) && (plVar3[1] != 0)) {
    local_40 = PTR_DAT_04bc0cb8 + 0x10;
    local_38 = (char *)CONCAT44(local_38._4_4_,0x18);
    (**(code **)(*plVar3 + 0x20))(plVar3,&local_40);
    local_40 = PTR_DAT_04bb2020 + 0x10;
    local_38 = "NameWindowBlankSpaceSize";
    (**(code **)(plVar3[3] + 0x1a0))(&local_18,plVar3[1],&local_40);
    if (local_18 != 0) {
      if (*(short *)(local_18 + 8) == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = *(undefined4 *)(local_18 + (ulong)*(uint *)(local_18 + 4));
      }
      *(undefined4 *)(param_1 + 0x2ac) = uVar4;
    }
  }
  plVar3 = *(long **)(param_1 + 0x2a0);
  if (plVar3 != (long *)0x0) {
    local_40 = puVar1 + 0x10;
    local_38 = (char *)CONCAT44(local_38._4_4_,0xb);
    (**(code **)(*plVar3 + 0x20))(plVar3,&local_40);
    puVar2 = (undefined4 *)(**(code **)(plVar3[3] + 0xd0))(plVar3[1]);
    *(undefined4 *)(param_1 + 0x2a8) = *puVar2;
  }
  return;
}

