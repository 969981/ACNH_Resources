
void FUN_0025f480(undefined8 param_1,long param_2,long param_3,undefined4 param_4,undefined4 param_5
                 )

{
  ulong uVar1;
  undefined8 local_40;
  undefined4 local_24;
  
  FUN_0025f220(*(undefined8 *)(param_2 + 0x70),*(undefined8 *)(param_3 + 8),
               (uint)*(ushort *)(param_3 + 0x16) + (uint)*(ushort *)(param_3 + 0x14),
               *(undefined1 *)(param_3 + 0x12));
  *(undefined4 *)(param_2 + 0x58) = param_4;
  *(undefined4 *)(param_2 + 0x5c) = param_5;
  FUN_00259cfc(*(undefined8 *)(param_2 + 0x80),*(undefined8 *)(param_2 + 0x70));
  local_40 = 0;
  FUN_002282f0(&local_40);
  uVar1 = local_40;
  local_40 = local_40 & 0xffffffff00000000;
  local_24 = 0;
  *(ulong *)(param_2 + 0x60) = uVar1;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((long)&local_40 + 4),(Result *)&local_24);
  FUN_002296c4(param_1,&local_40);
  return;
}

