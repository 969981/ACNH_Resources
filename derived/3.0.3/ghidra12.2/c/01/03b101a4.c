
void FUN_03b101a4(long param_1,long *param_2,long param_3,undefined8 param_4)

{
  ushort uVar1;
  uint uVar2;
  void *__dest;
  undefined8 *puVar3;
  
  uVar2 = FUN_00388f00(param_3);
  if ((uVar2 & 0xffff) < *(ushort *)(param_3 + 0x112) + 10) {
    return;
  }
  *(long *)(param_1 + 0x18) = param_3 + 0xb0;
  *(undefined8 *)(param_1 + 0x20) = param_4;
  *(long *)(param_1 + 0x28) = param_3;
  uVar1 = FUN_00388f00(param_3);
  *(ushort *)(param_1 + 0x5a) = uVar1;
  *(undefined2 *)(param_1 + 0x5c) = *(undefined2 *)(param_3 + 0x112);
  __dest = (void *)(**(code **)(*param_2 + 0x30))(param_2,(ulong)uVar1 << 1,8);
  *(void **)(param_1 + 0x30) = __dest;
  memcpy(__dest,*(void **)(param_3 + 0xd8),(ulong)*(ushort *)(param_1 + 0x5c) << 1);
  puVar3 = (undefined8 *)
           (**(code **)(*param_2 + 0x30))(param_2,(ulong)*(ushort *)(param_1 + 0x5a) << 1,8);
  *(undefined8 **)(param_1 + 0x38) = puVar3;
  *(undefined1 *)(param_1 + 0x5e) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined2 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined1 *)(param_1 + 0x61) = 0;
  *(byte *)(param_1 + 0x5f) = *(byte *)(param_1 + 0x5f) & 0xfc;
  *puVar3 = 0x200800000000e;
  *(undefined2 *)(puVar3 + 1) = 1;
  memcpy((void *)((long)puVar3 + 10),*(void **)(param_1 + 0x30),
         (ulong)*(ushort *)(param_1 + 0x5c) << 1);
                    /* WARNING: Could not recover jumptable at 0x03b102cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x28) + 0x150))
            (*(long **)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x38),
             *(ushort *)(param_1 + 0x5c) + 5);
  return;
}

