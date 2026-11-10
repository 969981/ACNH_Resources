
void FUN_002c5edc(long param_1,long param_2)

{
  long lVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 local_3c;
  undefined4 local_34;
  
  puVar3 = (undefined8 *)FUN_002c5fd0();
  if (puVar3 == (undefined8 *)0x0) {
    if (*(int *)(param_1 + 0x30) == 0) {
      return;
    }
    lVar4 = FUN_002237a8(param_1 + 0x20);
    lVar1 = 0;
    if (lVar4 != 0) {
      lVar1 = lVar4 - *(int *)(param_1 + 0x34);
    }
    *(undefined8 *)(lVar1 + 0x98) = 0;
    *(undefined8 *)(lVar1 + 0xa0) = 0;
    *(undefined8 *)(lVar1 + 0x88) = 0;
    *(undefined8 *)(lVar1 + 0x90) = 0;
    *(undefined8 *)(lVar1 + 0x78) = 0;
    *(undefined8 *)(lVar1 + 0x80) = 0;
    *(undefined8 *)(lVar1 + 0x68) = 0;
    *(undefined8 *)(lVar1 + 0x70) = 0;
    puVar3 = (undefined8 *)(lVar1 + 0x10);
    *puVar3 = 0;
    *(undefined8 *)(lVar1 + 0x58) = 0;
    *(undefined8 *)(lVar1 + 0x60) = 0;
    *(undefined8 *)(lVar1 + 0x48) = 0;
    *(undefined8 *)(lVar1 + 0x50) = 0;
    *(undefined8 *)(lVar1 + 0x38) = 0;
    *(undefined8 *)(lVar1 + 0x40) = 0;
    *(undefined8 *)(lVar1 + 0x28) = 0;
    *(undefined8 *)(lVar1 + 0x30) = 0;
    *(undefined8 *)(lVar1 + 0x18) = 0;
    *(undefined8 *)(lVar1 + 0x20) = 0;
    FUN_002b3fa8(puVar3);
    *(undefined8 *)(lVar1 + 0x90) = 0;
    *(undefined8 *)(lVar1 + 0x98) = 0;
    FUN_002236bc(param_1 + 8,param_1 + 8,lVar1);
  }
  local_34 = 0;
  local_3c = 0x40000;
  FUN_002b493c(param_2,&local_3c);
  FUN_002b415c(puVar3,param_2);
  puVar3[0x10] = *(undefined8 *)(param_2 + 0x80);
  puVar3[0x11] = *(undefined8 *)(param_2 + 0x88);
  uVar2 = *(undefined4 *)(param_2 + 0x90);
  *(undefined2 *)((long)puVar3 + 0x94) = *(undefined2 *)(param_2 + 0x94);
  *(undefined4 *)(puVar3 + 0x12) = uVar2;
  return;
}

