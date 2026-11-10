
void FUN_0037b59c(long param_1,long param_2,long param_3)

{
  byte *pbVar1;
  long *plVar2;
  uint uVar3;
  undefined *puVar4;
  long lVar5;
  long local_50;
  long local_48;
  
  puVar4 = PTR_DAT_04bcfae0;
  uVar3 = *(uint *)(param_1 + 0x10);
  if ((uVar3 >> 9 & 1) == 0) {
    FUN_00348090(param_2,*(undefined8 *)(param_1 + 0x40));
  }
  else {
    pbVar1 = (byte *)(*(long *)(param_1 + 0x18) +
                     ((ulong)uVar3 & 3) * 0x10 + ((ulong)uVar3 & 0x30) +
                     ((ulong)(uVar3 >> 2) & 3) * 0x14);
    (**(code **)PTR_DAT_04bcfae0)
              (*(long *)(param_1 + 0x40) + 8,*(undefined4 *)(&DAT_04058080 + (ulong)*pbVar1 * 4));
    (*DAT_04c62a78)(*(undefined4 *)(pbVar1 + 4),*(undefined8 *)(param_2 + 0xb0));
    FUN_00348090(param_2,*(undefined8 *)(param_1 + 0x40));
    (**(code **)puVar4)(*(long *)(param_1 + 0x40) + 8,8);
  }
  plVar2 = (long *)(*(long *)(*(long *)(param_3 + 200) + 0x10) +
                   (long)*(int *)(*(long *)(param_3 + 200) + 0x30) * 0x10);
  local_48 = plVar2[1];
  local_50 = *plVar2 + (ulong)*(uint *)(param_1 + 0x30);
  if (*(uint **)(param_1 + 0x38) == (uint *)0x0) {
    lVar5 = 0x230;
  }
  else {
    lVar5 = (ulong)**(uint **)(param_1 + 0x38) + 0x230;
  }
  FUN_00348cdc(param_2,*(undefined4 *)
                        (*(long *)(*(long *)(param_1 + 0x20) + 0x18) +
                        (ulong)*(ushort *)(param_1 + 0x4a) * 4),0,&local_50,lVar5);
  lVar5 = *(long *)(param_1 + 0x38);
  if ((lVar5 != 0) && (*(int *)(lVar5 + 0xc) != 0)) {
    plVar2 = (long *)(*(long *)(*(long *)(param_3 + 200) + 0x10) +
                     (long)*(int *)(*(long *)(param_3 + 200) + 0x30) * 0x10);
    local_48 = plVar2[1];
    local_50 = *plVar2 + (ulong)*(uint *)(lVar5 + 0xc);
    FUN_00348cdc(param_2,*(undefined4 *)
                          (*(long *)(*(long *)(param_1 + 0x20) + 0x20) +
                          (ulong)*(ushort *)(param_1 + 0x4a) * 4),3,&local_50,
                 *(undefined4 *)(lVar5 + 8));
  }
  FUN_0037b814(param_1,param_2,param_3);
  return;
}

