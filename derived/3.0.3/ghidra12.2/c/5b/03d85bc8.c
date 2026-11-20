
void FUN_03d85bc8(long param_1,int param_2,long param_3)

{
  uint *puVar1;
  byte bVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 local_40;
  undefined4 local_38;
  int iStack_34;
  undefined8 local_30;
  long lStack_28;
  
  if (param_2 == 2) {
    bVar2 = *(byte *)(param_1 + 0x2c0);
    if ((bVar2 >> 2 & 1) == 0) {
      return;
    }
  }
  else {
    if (param_2 != 0) {
      return;
    }
    bVar2 = *(byte *)(param_1 + 0x2c0);
    if ((bVar2 >> 2 & 1) != 0) {
      return;
    }
  }
  iStack_34 = *(int *)(param_3 + 0xc);
  local_40 = CONCAT44(local_40._4_4_,iStack_34);
  if (*(int *)(param_1 + 0x2b4) != iStack_34) {
    local_38 = *(undefined4 *)(param_3 + 8);
    local_40 = 2;
    puVar3 = *(undefined8 **)(param_1 + 0x260);
    local_30 = 0;
    lStack_28 = param_1;
    if (puVar3 != (undefined8 *)0x0) {
      (**(code **)*puVar3)(puVar3,&local_40);
    }
    puVar3 = *(undefined8 **)(param_1 + 0x268);
    if (puVar3 != (undefined8 *)0x0) {
      (**(code **)*puVar3)(puVar3,&local_40);
    }
    return;
  }
  lVar4 = *(long *)(param_1 + 0x280);
  if (*(char *)(lVar4 + 0x20) == '\0') {
    if ((0xb < *(uint *)(lVar4 + 0x28)) ||
       ((1 << (ulong)(*(uint *)(lVar4 + 0x28) & 0x1f) & 0x922U) == 0)) goto LAB_03d85cfc;
  }
  else {
    puVar1 = (uint *)(lVar4 + 0x24);
    if (*(char *)(lVar4 + 0x21) != '\0') {
      puVar1 = (uint *)(lVar4 + 0x28);
    }
    if (0xb < *puVar1 || (1 << (ulong)(*puVar1 & 0x1f) & 0x922U) == 0) goto LAB_03d85cfc;
  }
  if (((bVar2 >> 1 & 1) != 0) &&
     (puVar3 = *(undefined8 **)(param_1 + 0x270), puVar3 != (undefined8 *)0x0)) {
    (**(code **)*puVar3)(puVar3,0,*(undefined4 *)(param_3 + 8));
    iStack_34 = *(int *)(param_3 + 0xc);
  }
LAB_03d85cfc:
  FUN_03d831c0(param_1,0,*(undefined4 *)(param_3 + 8),iStack_34);
  return;
}

