
void FUN_02145f20(long param_1,ushort *param_2)

{
  ushort uVar1;
  ushort uVar2;
  long lVar3;
  ulong uVar4;
  undefined4 local_34;
  
  if ((char)param_2[3] != '\x03') {
    lVar3 = *(long *)(param_1 + 8);
    uVar1 = *param_2;
    uVar2 = param_2[1];
    if ((uVar1 < *(ushort *)(lVar3 + 4)) ||
       ((uVar2 < *(ushort *)(lVar3 + 6) || *(ushort *)(lVar3 + 8) < uVar1) ||
        *(ushort *)(lVar3 + 10) < uVar2)) {
      FUN_035a4360(lVar3,uVar1,uVar2,0);
      return;
    }
    local_34 = 0;
    uVar4 = FUN_035ab240(uVar1,uVar2,*(undefined8 *)(param_1 + 0x10),&local_34);
    if ((uVar4 & 1) == 0) {
      FUN_02144d70(param_1,param_2);
    }
    else {
      FUN_035a4360(*(undefined8 *)(param_1 + 8),uVar1,uVar2,local_34);
    }
  }
  return;
}

