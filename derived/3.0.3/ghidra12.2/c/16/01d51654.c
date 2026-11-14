
void FUN_01d51654(undefined8 *param_1,long param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  long lVar5;
  long lVar6;
  undefined4 local_48;
  char local_44;
  undefined8 ***local_40;
  undefined8 **ppuStack_38;
  undefined8 ***local_18;
  
  lVar6 = *(long *)**(undefined8 **)*param_1;
  FUN_02703058(&local_48,DAT_05574040);
  puVar2 = PTR_DAT_04bb3728;
  if (local_44 == '\0') {
    uVar4 = 0xff;
    *(undefined1 *)(param_2 + 0x110) = 0xff;
  }
  else {
    *(undefined4 *)(lVar6 + 0x658) = local_48;
    lVar5 = *(long *)puVar2;
    uVar1 = *(uint *)(lVar5 + 0xb0);
    if (uVar1 == 0xffffffff) goto LAB_01d51744;
    local_40 = &local_18;
    uVar3 = (*(code *)(&PTR_LAB_04a43188)[uVar1])(&local_40,lVar5 + 0x58);
    *(undefined4 *)(lVar6 + 0x65c) = uVar3;
    *(char *)(param_2 + 0x110) = (char)*(undefined4 *)(lVar6 + 0x658);
    uVar4 = (undefined1)*(undefined4 *)(lVar6 + 0x65c);
  }
  lVar6 = *(long *)puVar2;
  *(undefined1 *)(param_2 + 0x111) = uVar4;
  local_40 = (undefined8 ***)(param_2 + 8);
  uVar1 = *(uint *)(lVar6 + 0xb0);
  ppuStack_38 = local_40;
  if (uVar1 != 0xffffffff) {
    local_18 = &local_40;
    (*(code *)(&PTR_LAB_04a43148)[uVar1])(&local_18,lVar6 + 0x58);
    return;
  }
LAB_01d51744:
                    /* WARNING: Subroutine does not return */
  FUN_00d72dc0();
}

