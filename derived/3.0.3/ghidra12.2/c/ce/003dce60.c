
void FUN_003dce60(long param_1)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined4 local_24;
  
  if ((*(long *)(param_1 + 0x30) != 0) && (*(char *)(param_1 + 0x38) == '\x02')) {
    lVar4 = *(long *)(param_1 + 0x28);
    lVar2 = (**(code **)(**(long **)(param_1 + 8) + 0x38))();
    if ((lVar2 == lVar4) ||
       ((uVar3 = (**(code **)(**(long **)(param_1 + 8) + 0x58))(), (uVar3 & 1) != 0 &&
        (iVar1 = (**(code **)(**(long **)(param_1 + 8) + 0x30))(*(long **)(param_1 + 8),lVar4,0),
        -1 < iVar1)))) {
      local_24 = 0;
      (**(code **)(**(long **)(param_1 + 8) + 0x28))
                (*(long **)(param_1 + 8),*(undefined8 *)(param_1 + 0x18),
                 *(undefined8 *)(param_1 + 0x30),&local_24);
      *(undefined1 *)(param_1 + 0x38) = 0;
    }
  }
  *(undefined8 *)(param_1 + 0x28) = 0xffffffff;
  *(undefined8 *)(param_1 + 0x30) = 0;
  return;
}

