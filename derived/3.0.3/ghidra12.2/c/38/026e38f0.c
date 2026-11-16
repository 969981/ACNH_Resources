
/* WARNING: Removing unreachable block (ram,0x026e3958) */
/* WARNING: Removing unreachable block (ram,0x026e3948) */
/* WARNING: Removing unreachable block (ram,0x026e39c4) */

void FUN_026e38f0(void)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uVar5;
  int iVar6;
  undefined2 uVar7;
  long lVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined4 uVar11;
  long lVar12;
  undefined8 local_88;
  long local_80;
  long local_78;
  undefined *local_70;
  int local_68;
  int local_64;
  undefined4 local_48;
  undefined4 local_44;
  
  puVar4 = PTR_DAT_04bbbc68;
  puVar3 = PTR_DAT_04bb37e0;
  local_48 = 0x32;
  lVar8 = *(long *)(*(long *)PTR_DAT_04bb27a8 + 0x1c0);
  if (lVar8 != 0) {
    local_80 = lVar8 + 0x40;
    local_78 = lVar8 + 0x50;
    iVar2 = *(int *)(lVar8 + 0x48);
    local_64 = *(int *)(lVar8 + 0x4c);
    local_70 = PTR_DAT_04bb2010 + 0x10;
    iVar1 = *(int *)(lVar8 + 0x5c) + 1;
    if (iVar1 != local_64) {
      local_68 = iVar2;
      do {
        local_88 = 0xfffe;
        FUN_0277d4ac(&local_88);
        if (*(long *)(lVar8 + 0xd0) == 0) {
          uVar7 = *(undefined2 *)puVar3;
          uVar9 = puVar3[2];
          uVar10 = puVar3[3];
          uVar11 = *(undefined4 *)(puVar3 + 4);
        }
        else {
          FUN_012e4d78(&local_48,*(long *)(lVar8 + 0xd0),&local_70);
          uVar7 = (undefined2)local_48;
          uVar9 = local_48._2_1_;
          uVar10 = local_48._3_1_;
          uVar11 = local_44;
        }
        lVar12 = *(long *)puVar4;
        local_88 = CONCAT44(uVar11,CONCAT13(uVar10,CONCAT12(uVar9,uVar7)));
        if (((((lVar12 != 0) && (*(long *)(lVar12 + 0xb0) != 0)) &&
             (*(long *)(*(long *)(lVar12 + 0xb0) + 8) != 0)) &&
            ((*(long *)(lVar12 + 0x488) != 0 && (*(long *)(*(long *)(lVar12 + 0x488) + 8) != 0))))
           && ((*(long *)(lVar12 + 0x2b0) != 0 && (*(long *)(*(long *)(lVar12 + 0x2b0) + 8) != 0))))
        {
          uVar5 = FUN_0277d6c4(&local_88);
          uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
          if ((((uVar5 < *(uint *)(lVar12 + 0x1d8)) &&
               (*(long *)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) &&
              (iVar6 = FUN_0277d6c4(&local_88), iVar6 == 0xea79)) && (*(long *)(lVar8 + 0xd0) != 0))
          {
            FUN_012e5af4(*(long *)(lVar8 + 0xd0),&local_70);
          }
        }
        if (local_68 < *(int *)(local_78 + 8)) {
          local_68 = local_68 + 1;
        }
        else {
          local_64 = local_64 + 1;
          local_68 = *(int *)(local_80 + 8);
        }
      } while ((iVar2 != local_68) || (iVar1 != local_64));
    }
  }
  return;
}

