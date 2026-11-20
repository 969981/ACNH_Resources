
void FUN_03fc2f24(long param_1,undefined1 param_2)

{
  ushort *puVar1;
  ushort uVar2;
  ushort uVar3;
  long *plVar4;
  long lVar5;
  
  puVar1 = (ushort *)(&LAB_00316ac0 + param_1);
  uVar2 = *puVar1;
  uVar3 = uVar2 >> 1;
  if ((uVar2 & 1) == 0) {
    *(undefined1 *)(param_1 + 0x3170c8) = param_2;
  }
  else {
    lVar5 = *(long *)(param_1 + 0x45e68);
    *(ushort *)(param_1 + (ulong)uVar3 * 2 + 0x316ac2) =
         CONCAT11(param_2,*(undefined1 *)(param_1 + 0x3170c8));
    plVar4 = *(long **)(lVar5 + 0x78);
    (**(code **)(*plVar4 + 0x38))(plVar4,param_1);
    uVar2 = *puVar1;
  }
  lVar5 = param_1 + (ulong)uVar3 * 2;
  uVar3 = *(ushort *)(lVar5 + 0x316ac2);
  *puVar1 = uVar2 + 1 & 0x1ff;
  *(ushort *)(&LAB_00316cc4 + lVar5) = uVar3 & 0x7fff;
  *(ushort *)(lVar5 + 0x316ec6) = uVar3 | 0x8000;
  *(ushort *)(param_1 + 0x3170cc) =
       *(ushort *)(param_1 + 0x3170ca) | *(ushort *)(&LAB_00316cc4 + param_1);
  return;
}

