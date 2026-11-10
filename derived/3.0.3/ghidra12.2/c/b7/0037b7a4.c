
void FUN_0037b7a4(long param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  long local_20;
  long local_18;
  
  lVar2 = *(long *)(param_1 + 0x38);
  if ((lVar2 != 0) && (*(int *)(lVar2 + 0xc) != 0)) {
    plVar1 = (long *)(*(long *)(*(long *)(param_3 + 200) + 0x10) +
                     (long)*(int *)(*(long *)(param_3 + 200) + 0x30) * 0x10);
    local_18 = plVar1[1];
    local_20 = *plVar1 + (ulong)*(uint *)(lVar2 + 0xc);
    FUN_00348cdc(param_2,*(undefined4 *)
                          (*(long *)(*(long *)(param_1 + 0x20) + 0x20) +
                          (ulong)*(ushort *)(param_1 + 0x4a) * 4),3,&local_20,
                 *(undefined4 *)(lVar2 + 8));
  }
  return;
}

