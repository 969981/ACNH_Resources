
void FUN_002a6b90(undefined8 param_1,long *param_2,undefined1 *param_3,int *param_4,uint param_5)

{
  uint uVar1;
  uint *puVar2;
  uint *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined4 local_44;
  ErrorResultVariant aEStack_40 [12];
  undefined4 local_34;
  
  if (((param_3 != (undefined1 *)0x0) && (param_4 != (int *)0x0)) &&
     (uVar1 = (**(code **)(*param_2 + 0x20))(), uVar1 <= param_5)) {
    *param_3 = (char)param_2[1];
    param_3[1] = *(undefined1 *)((long)param_2 + 9);
    *(ushort *)(param_3 + 2) =
         *(ushort *)((long)param_2 + 10) >> 8 | *(ushort *)((long)param_2 + 10) << 8;
    *(ushort *)(param_3 + 4) =
         *(ushort *)((long)param_2 + 0xc) >> 8 | *(ushort *)((long)param_2 + 0xc) << 8;
    *(ushort *)(param_3 + 6) =
         *(ushort *)((long)param_2 + 0xe) >> 8 | *(ushort *)((long)param_2 + 0xe) << 8;
    param_3[8] = (char)param_2[2];
    if (*(byte *)(param_2 + 2) < 0x20) {
      puVar3 = (uint *)(param_3 + 9);
      if (*(byte *)(param_2 + 2) != 0) {
        uVar4 = 0;
        puVar2 = puVar3;
        do {
          uVar5 = uVar4 >> 5 & 0x7ffffff;
          uVar1 = *(uint *)((long)param_2 + uVar5 * 4 + 0x14);
          if ((uVar4 & 0x1f) != 0) {
            uVar1 = (*(int *)((long)param_2 + (ulong)((int)uVar5 + 1) * 4 + 0x14) << 1) <<
                    (ulong)(~(uint)uVar4 & 0x1f) | uVar1 >> (ulong)((uint)uVar4 & 0x1f);
          }
          uVar1 = (uVar1 & 0xff00ff00) >> 8 | (uVar1 & 0xff00ff) << 8;
          uVar4 = uVar4 + 1;
          puVar3 = puVar2 + 1;
          *puVar2 = uVar1 >> 0x10 | uVar1 << 0x10;
          puVar2 = puVar3;
        } while (uVar4 < (ulong)*(byte *)(param_2 + 2) * 0x20000000 + 0x3e0000000 >> 0x22);
      }
      local_44 = 0;
      *param_4 = (int)puVar3 - (int)param_3;
      goto LAB_002a6c30;
    }
  }
  local_44 = 0x10c07;
LAB_002a6c30:
  local_34 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_40,(Result *)&local_34);
  FUN_002296c4(param_1,&local_44);
  return;
}

