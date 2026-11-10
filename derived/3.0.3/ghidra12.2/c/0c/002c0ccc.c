
void FUN_002c0ccc(long param_1,undefined8 param_2)

{
  long lVar1;
  byte bVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  lVar1 = param_1 + 400;
  uVar3 = FUN_002b449c(lVar1);
  if ((uVar3 & 1) == 0) {
LAB_002c0d64:
    *(undefined1 *)(param_1 + 0x210) = 1;
    return;
  }
  uVar3 = FUN_002b444c(lVar1);
  if (((uVar3 & 1) == 0) || (uVar3 = FUN_002b444c(param_2), (uVar3 & 1) == 0)) {
    uVar4 = FUN_002b4368(lVar1);
    uVar5 = FUN_002b4368(param_2);
    uVar3 = FUN_002200e4(uVar4,uVar5);
    if ((uVar3 & 1) == 0) goto LAB_002c0d64;
    bVar2 = FUN_002b447c(lVar1,param_2);
  }
  else {
    bVar2 = FUN_002b4470(lVar1,param_2);
  }
  *(byte *)(param_1 + 0x210) = (bVar2 ^ 1) & 1;
  return;
}

