
undefined8 FUN_01fadfe0(long param_1,long param_2)

{
  int iVar1;
  undefined *puVar2;
  int iVar3;
  undefined *puVar4;
  uint uVar5;
  undefined2 *puVar6;
  ulong uVar7;
  long lVar8;
  undefined *local_98;
  undefined2 local_90;
  undefined1 local_8e;
  undefined1 local_8d;
  undefined4 local_8c;
  long local_88;
  long local_80;
  long local_78;
  undefined *local_70;
  int local_68;
  int local_64;
  
  puVar4 = PTR_DAT_04bb43c0;
  local_80 = param_2 + 8;
  local_78 = param_2 + 0x18;
  iVar3 = *(int *)(param_2 + 0x10);
  local_64 = *(int *)(param_2 + 0x14);
  local_70 = PTR_DAT_04bb2010 + 0x10;
  iVar1 = *(int *)(param_2 + 0x24) + 1;
  if (iVar1 != local_64) {
    puVar2 = PTR_DAT_04bc0510 + 0x10;
    local_68 = iVar3;
    do {
      puVar6 = (undefined2 *)FUN_01a5190c(*(undefined8 *)(param_1 + 8),0,&local_70,0);
      uVar7 = FUN_0277e294();
      if ((uVar7 & 1) != 0) {
        lVar8 = *(long *)puVar4;
        local_90 = *puVar6;
        local_8e = *(undefined1 *)(puVar6 + 1);
        local_8d = *(undefined1 *)((long)puVar6 + 3);
        local_8c = *(undefined4 *)(puVar6 + 2);
        local_88 = 0;
        local_98 = puVar2;
        uVar5 = FUN_0277d6c4(&local_90);
        if (*(long *)puVar4 != 0) {
          lVar8 = *(long *)(lVar8 + 0x57e58);
          uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
          if ((uVar5 < *(uint *)(lVar8 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) {
            lVar8 = *(long *)PTR_DAT_04bc0428;
            uVar5 = FUN_0277d6c4(puVar6);
            uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
            if ((uVar5 < *(uint *)(lVar8 + 0x1d8)) &&
               (lVar8 = *(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar5 * 8), lVar8 != 0)) {
              local_88 = lVar8;
            }
          }
        }
        uVar7 = FUN_01ae6020(&local_98);
        if ((uVar7 & 1) != 0) {
          return 1;
        }
      }
      if (local_68 < *(int *)(local_78 + 8)) {
        local_68 = local_68 + 1;
      }
      else {
        local_64 = local_64 + 1;
        local_68 = *(int *)(local_80 + 8);
      }
    } while ((iVar3 != local_68) || (iVar1 != local_64));
  }
  return 0;
}

