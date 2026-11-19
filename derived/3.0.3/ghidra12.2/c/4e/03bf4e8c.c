
void FUN_03bf4e8c(undefined1 param_1 [16],undefined1 param_2 [16],undefined4 param_3,long param_4)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 (*pauVar5) [12];
  undefined8 *puVar6;
  long *plVar7;
  long *plVar8;
  undefined4 extraout_s0;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 uStack_38;
  
  uVar9 = param_2._12_4_;
  lVar2 = (**(code **)(**(long **)(*(long *)(param_4 + 0x30) + 0x18) + 0x20))();
  lVar4 = 0x538;
  if (*(char *)(lVar2 + 0x968) != '\0') {
    lVar4 = 0x108;
  }
  if (((*(byte *)(lVar2 + lVar4 + 3) >> 1 & 1) != 0) || ((*(byte *)(param_4 + 0xd8) >> 1 & 1) == 0))
  {
    plVar7 = *(long **)(param_4 + 0x38);
    iVar1 = (**(code **)(*plVar7 + 0x60))(plVar7);
    if (iVar1 < 1) {
      puVar6 = *(undefined8 **)(param_4 + 0x50);
      if (puVar6 == (undefined8 *)0x0) {
        lVar4 = *(long *)(param_4 + 0x40);
        if (*(char *)(param_4 + 0x48) == '\0') {
          uVar10 = *(undefined4 *)(lVar4 + 0xc);
          uVar9 = *(undefined4 *)(lVar4 + 0x2c);
          param_3 = *(undefined4 *)(lVar4 + 0x1c);
        }
        else {
          uVar9 = (undefined4)*(undefined8 *)(lVar4 + 0x38);
          uVar10 = (undefined4)*(undefined8 *)(lVar4 + 0x30);
          param_3 = (undefined4)((ulong)*(undefined8 *)(lVar4 + 0x30) >> 0x20);
        }
      }
      else {
        uVar10 = (undefined4)*puVar6;
        param_3 = (undefined4)((ulong)*puVar6 >> 0x20);
        uVar9 = *(undefined4 *)(puVar6 + 1);
      }
    }
    else {
      plVar8 = *(long **)(param_4 + 0x38);
      uVar3 = (**(code **)(*plVar8 + 0x68))(plVar8,0);
      lVar4 = (**(code **)(*plVar8 + 0x10))(plVar8,uVar3);
      uVar10 = extraout_s0;
      if (lVar4 != 0) {
        pauVar5 = (undefined1 (*) [12])(**(code **)(*plVar8 + 0x10))(plVar8,uVar3);
        param_3 = (undefined4)((ulong)*(undefined8 *)pauVar5[4] >> 0x20);
        uStack_40 = SUB124(*pauVar5,4);
        uStack_3c = SUB124(*(undefined1 (*) [12])(pauVar5[1] + 4),4);
        uVar10 = (undefined4)*(undefined8 *)pauVar5[4];
        uVar9 = (undefined4)*(undefined8 *)(pauVar5[4] + 8);
        uStack_38 = CONCAT44(param_3,SUB124(*(undefined1 (*) [12])(pauVar5[2] + 8),4));
        local_44 = uVar10;
      }
    }
    local_50 = CONCAT44(param_3,uVar10);
    local_48 = uVar9;
    uVar9 = (**(code **)(*plVar7 + 0x90))(plVar7,&local_50);
    *(undefined4 *)(param_4 + 0x60) = uVar9;
  }
  return;
}

