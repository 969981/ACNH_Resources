
undefined8 FUN_03c8a6e0(long param_1,undefined8 param_2,long *param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  uint *puVar3;
  long lVar4;
  long lVar5;
  uint local_38;
  byte local_34;
  
  (**(code **)(*param_3 + 0x18))(param_3);
  lVar5 = *(long *)(param_1 + 0x10);
  lVar4 = param_3[1];
  (**(code **)(*(long *)(lVar5 + 0x128) + 0x18))(lVar5 + 0x128);
  uVar1 = FUN_03c8cf90(lVar4,*(undefined8 *)(lVar5 + 0x130));
  if ((uVar1 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    local_38 = 0;
    local_34 = 0;
    FUN_03c87af0(*(undefined8 *)(param_1 + 8),&local_38,*(undefined8 *)(param_1 + 0x10),param_2,0);
    if ((*(ushort *)(*(long *)(param_1 + 8) + 8) & 0x20f) == 0) {
      puVar3 = *(uint **)(param_1 + 0x18);
      if (*puVar3 < local_38) {
        *puVar3 = local_38;
        puVar3 = *(uint **)(param_1 + 0x18);
      }
      uVar2 = 0;
      *(byte *)(puVar3 + 1) = (byte)puVar3[1] | local_34;
    }
    else {
      uVar2 = 1;
    }
  }
  return uVar2;
}

