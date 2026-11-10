
void FUN_00380c88(long param_1,long param_2,undefined8 param_3)

{
  long *plVar1;
  byte bVar2;
  long lVar3;
  long local_58 [4];
  long lStack_38;
  
  if ((*(long *)(param_1 + 8) != 0) &&
     (((bVar2 = *(byte *)(*(long *)(param_1 + 8) + 4), (bVar2 >> 1 & 1) != 0 &&
       (*(char *)(param_1 + 0x54) == '\0')) ||
      (((bVar2 >> 1 & 1) == 0 && (*(long *)(param_1 + 0x58) != 0)))))) {
    local_58[1] = 0;
    local_58[2] = 0;
    local_58[0] = *(long *)(param_1 + 0x48) + 0x40;
    FUN_003486c4(param_3,local_58[0],local_58 + 1,0);
    FUN_003482c0(param_3,1,local_58,0);
    FUN_003483bc(param_3,*(long *)(param_1 + 0x48) + 0x88);
    FUN_003819b4(param_1,param_2,param_3);
    plVar1 = (long *)(*(long *)(*(long *)(param_2 + 200) + 0x10) +
                     (long)*(int *)(*(long *)(param_2 + 200) + 0x30) * 0x10);
    lStack_38 = plVar1[1];
    local_58[3] = *plVar1 + (long)*(int *)(param_1 + 0x50);
    lVar3 = *(long *)(param_2 + 0xb8);
    FUN_00348cdc(param_3,*(undefined4 *)
                          (*(long *)(*(long *)(param_1 + 0x38) + 0x18) +
                          (long)*(int *)(param_1 + 0x40) * 4),0,local_58 + 3,0x230);
    FUN_00347e74(param_3,3,1,lVar3 + 0x248,6,0);
    FUN_00348a0c(param_3,0x80);
    FUN_00348a34(param_3,0x20);
    FUN_00365188(param_2,param_3);
    if ((*(long *)(param_1 + 8) != 0) && ((*(byte *)(*(long *)(param_1 + 8) + 4) >> 1 & 1) != 0)) {
      *(undefined1 *)(param_1 + 0x54) = 1;
    }
  }
  return;
}

