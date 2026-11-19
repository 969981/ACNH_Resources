
void FUN_0392cbd8(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long *plVar1;
  char *pcVar2;
  long *plVar3;
  uint uVar4;
  undefined1 auStack_458 [1048];
  
  uVar4 = *(uint *)(param_4 + 0x68);
  if (uVar4 != 0xffffffff) {
    pcVar2 = "true";
    if ((*(byte *)(param_4 + 0x71) & 1) != 0) {
      pcVar2 = "false";
    }
    FUN_006e9454(auStack_458,&DAT_040a328e,pcVar2);
    if (*(int *)(param_4 + 0x48) == 8) {
      FUN_0071b954(auStack_458,"GroupHeader = %s, BgColor = %s",&DAT_040ab8e7,&DAT_040ab8e7);
      FUN_0071b954(auStack_458,"GroupHeader = %s, BgColor = %s","Yellow","Yellow");
      FUN_0071b954(auStack_458,"GroupHeader = %s, BgColor = %s","Green","Green");
      FUN_0071b954(auStack_458,"GroupHeader = %s, BgColor = %s",&DAT_040e1636,&DAT_040e1636);
      FUN_0071b954(auStack_458,"GroupHeader = %s, BgColor = %s",&DAT_0408c944,&DAT_0408c944);
      FUN_0071b954(auStack_458,"GroupHeader = %s, BgColor = %s","Magenta","Magenta");
    }
    else if (*(int *)(param_4 + 0x48) == 7) {
      plVar1 = (long *)(param_1 + 0x960);
      FUN_0071b954(auStack_458,"GroupHeader = %s",&DAT_0408aa4b);
      plVar3 = plVar1 + (ulong)uVar4 * 5 + 5;
      if (0x26 < uVar4) {
        plVar3 = plVar1;
      }
      (**(code **)(*plVar3 + 0x48))();
      plVar3 = plVar1 + (ulong)(uVar4 + 2) * 5;
      if (0x27 < uVar4 + 2) {
        plVar3 = plVar1;
      }
      (**(code **)(*plVar3 + 0x48))();
      FUN_0071b954(auStack_458,"GroupHeader = %s",&DAT_040ebd36);
      plVar3 = plVar1 + (ulong)(uVar4 + 4) * 5;
      if (0x27 < uVar4 + 4) {
        plVar3 = plVar1;
      }
      (**(code **)(*plVar3 + 0x48))();
      plVar3 = plVar1 + (ulong)(uVar4 + 5) * 5;
      if (0x27 < uVar4 + 5) {
        plVar3 = plVar1;
      }
      (**(code **)(*plVar3 + 0x48))();
      FUN_0071b954(auStack_458,"GroupHeader = %s",&DAT_040a986b);
      plVar3 = plVar1 + (ulong)(uVar4 + 7) * 5;
      if (0x27 < uVar4 + 7) {
        plVar3 = plVar1;
      }
      (**(code **)(*plVar3 + 0x48))();
      plVar3 = plVar1 + (ulong)(uVar4 + 8) * 5;
      if (0x27 < uVar4 + 8) {
        plVar3 = plVar1;
      }
      (**(code **)(*plVar3 + 0x48))();
    }
  }
  return;
}

