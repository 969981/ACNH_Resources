
void FUN_007b5294(long param_1)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  long lVar5;
  uint *puVar6;
  undefined8 local_40;
  undefined8 uStack_38;
  
  nn::album::Initialize();
  puVar6 = *(uint **)(param_1 + 0x640);
  uVar1 = *puVar6;
  lVar5 = 0;
  if (*(long *)(puVar6 + 2) != 0) {
    lVar5 = (*DAT_04c61fd0)();
    puVar6 = *(uint **)(param_1 + 0x640);
  }
  uVar2 = puVar6[0x10];
  if (*(int *)(param_1 + 0x20) == 1) {
    if (DAT_04ca9180 == 0) {
      local_40 = 0;
      uStack_38 = 0;
    }
    else {
      local_40 = *(undefined8 *)(DAT_04ca9180 + 0x140);
      uStack_38 = *(undefined8 *)(DAT_04ca9180 + 0x148);
    }
    (**(code **)(*(long *)(param_1 + 0x648) + 0x18))(param_1 + 0x648);
    iVar4 = nn::album::SaveAndShareScreenshot
                      ((ShareId *)(param_1 + 0x28),lVar5 + (ulong)uVar1,uVar2,0,3,&local_40,
                       *(undefined8 *)(param_1 + 0x650));
    *(int *)(param_1 + 0x24) = iVar4;
    if (iVar4 == 0) {
      **(undefined1 **)(param_1 + 0x430) = 0;
      (**(code **)(*(long *)(param_1 + 0x428) + 0x18))(param_1 + 0x428);
      nn::album::GetSharePostedLastUrl
                (*(char **)(param_1 + 0x430),(long)*(int *)(param_1 + 0x438),
                 (ShareId *)(param_1 + 0x28));
    }
  }
  else if (*(int *)(param_1 + 0x20) == 0) {
    uVar3 = nn::album::SaveScreenshot(lVar5 + (ulong)uVar1,uVar2,0,2);
    *(undefined4 *)(param_1 + 0x24) = uVar3;
  }
  nn::album::Finalize();
  return;
}

