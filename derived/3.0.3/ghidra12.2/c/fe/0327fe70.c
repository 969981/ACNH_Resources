
/* WARNING: Removing unreachable block (ram,0x0327ff0c) */

void FUN_0327fe70(long param_1,long param_2)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  undefined4 uVar4;
  long lVar5;
  undefined4 uVar6;
  long lVar7;
  
  FUN_0327f99c();
  if (*(uint *)(param_1 + 0xc) < 3) {
    uVar4 = *(undefined4 *)(&DAT_04184628 + (long)(int)*(uint *)(param_1 + 0xc) * 4);
  }
  else {
    uVar4 = 0;
  }
  FUN_0390a734(*(undefined8 *)(param_1 + 0x20),1,*(undefined4 *)(param_2 + 0x20),
               *(undefined4 *)(param_2 + 0x18),*(undefined4 *)(param_2 + 0x1c),1,1,uVar4,0,1);
  lVar5 = *(long *)(param_1 + 0x30);
  uVar6 = 0;
  uVar4 = *(undefined4 *)(*(long *)(param_1 + 0x20) + 0x3c);
  iVar2 = *(int *)(*(long *)(param_1 + 0x20) + 0x40);
  lVar3 = *(long *)(param_2 + 8);
  if (*(uint *)(param_1 + 0xc) < 3) {
    uVar6 = *(undefined4 *)(&DAT_04184634 + (long)(int)*(uint *)(param_1 + 0xc) * 4);
  }
  if (lVar3 == 0) {
    lVar7 = *(long *)PTR_DAT_04bb2698;
    lVar3 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    plVar1 = (long *)(lVar7 + 8);
    if (lVar3 != 0) {
      plVar1 = (long *)(lVar3 + 0xa8);
    }
    lVar3 = *plVar1;
  }
  *(undefined8 *)(lVar5 + 0x30) = 0;
  *(undefined2 *)(lVar5 + 0x2a) = 0;
  *(undefined8 *)(lVar5 + 8) = 0;
  *(undefined8 *)(lVar5 + 0x10) = 0;
  *(undefined8 *)(lVar5 + 0x18) = 0;
  *(undefined8 *)(lVar5 + 0x20) = 0;
  *(byte *)(lVar5 + 0x28) = *(byte *)(lVar5 + 0x28) & 0xfe;
  if (iVar2 != 0) {
    FUN_038f8590(*(undefined8 *)PTR_DAT_04bd0fa8,lVar5,lVar3,iVar2,uVar4,uVar6);
  }
  *(short *)(lVar5 + 0x2a) = (short)uVar6;
  return;
}

