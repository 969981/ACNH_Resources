
bool FUN_003d9c10(long param_1,long param_2)

{
  long lVar1;
  bool bVar2;
  uint *puVar3;
  ulong uVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  undefined2 local_58;
  byte local_54;
  undefined2 local_53;
  
  puVar3 = (uint *)FUN_003dbc3c(*(undefined8 *)(param_2 + 8));
  uVar5 = *puVar3;
  if (7 < uVar5) {
    uVar5 = 8;
  }
  if (uVar5 == 0) {
LAB_003d9d9c:
    bVar2 = true;
  }
  else {
    local_58 = 0;
    local_54 = 0;
    local_53 = 0;
    uVar4 = FUN_003db8d0(param_2,&local_58,0);
    bVar2 = false;
    if ((uVar4 & 1) != 0) {
      uVar4 = 0;
      lVar7 = 0x74;
      do {
        lVar1 = uVar4 * 0xe;
        *(undefined1 *)(*(long *)(param_1 + 0x30) + lVar1 + 0x68) = (undefined1)local_58;
        *(undefined1 *)(*(long *)(param_1 + 0x30) + lVar1 + 0x69) = local_58._1_1_;
        *(byte *)(*(long *)(param_1 + 0x30) + lVar1 + 0x73) = local_54;
        if (local_54 != 0) {
          uVar6 = 0;
          do {
            *(undefined1 *)(*(long *)(param_1 + 0x30) + lVar7 + uVar6) =
                 *(undefined1 *)((long)&local_53 + uVar6);
            uVar6 = uVar6 + 1;
          } while (uVar6 < local_54);
        }
        uVar4 = uVar4 + 1;
        *(undefined1 *)(*(long *)(param_1 + 0x30) + lVar1 + 0x6a) = 0;
        *(undefined1 *)(*(long *)(param_1 + 0x30) + lVar1 + 0x6b) = 0;
        *(undefined1 *)(*(long *)(param_1 + 0x30) + lVar1 + 0x6c) = 0x7f;
        *(undefined1 *)(*(long *)(param_1 + 0x30) + lVar1 + 0x6d) = 0;
        *(undefined1 *)(*(long *)(param_1 + 0x30) + lVar1 + 0x6e) = 0;
        *(undefined1 *)(*(long *)(param_1 + 0x30) + lVar1 + 0x6f) = 0;
        *(undefined1 *)(*(long *)(param_1 + 0x30) + lVar1 + 0x70) = 0x40;
        *(undefined1 *)(*(long *)(param_1 + 0x30) + lVar1 + 0x71) = 0;
        *(undefined1 *)(*(long *)(param_1 + 0x30) + lVar1 + 0x72) = 0;
        if (uVar4 == uVar5) goto LAB_003d9d9c;
        local_58 = 0;
        local_54 = 0;
        local_53 = 0;
        uVar6 = FUN_003db8d0(param_2,&local_58,uVar4 & 0xffffffff);
        lVar7 = lVar7 + 0xe;
      } while ((uVar6 & 1) != 0);
      bVar2 = uVar5 <= uVar4;
    }
  }
  return bVar2;
}

