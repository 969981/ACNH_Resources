
void FUN_00a7f5f4(uint *param_1,undefined8 param_2)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined **local_858;
  long lStack_850;
  undefined **local_848;
  undefined2 *local_840;
  undefined4 local_838;
  undefined2 local_834 [1023];
  undefined2 local_36;
  
  uVar1 = *param_1;
  if ((-1 < (int)uVar1) && ((int)uVar1 < *(int *)(DAT_053762d8 + 0x200))) {
    local_36 = 0;
    local_840 = local_834;
    local_838 = 0x400;
    local_848 = &PTR_LAB_0492e9f0;
    local_834[0] = 0;
    if (uVar1 < *(uint *)(DAT_053762d8 + 0x200)) {
      lVar3 = *(long *)(*(long *)(DAT_053762d8 + 0x208) + (ulong)uVar1 * 8);
    }
    else {
      lVar3 = 0;
    }
    lStack_850 = lVar3 + 0x1cd0;
    local_858 = &PTR_LAB_048f9770;
    uVar2 = FUN_00a7f6d4();
    FUN_01df33d0(&local_848,&local_858,uVar2);
    (*(code *)local_848[3])(&local_848);
    FUN_01c13f00(param_2,local_840,local_838,*(undefined1 *)(lVar3 + 0x1cef));
  }
  return;
}

