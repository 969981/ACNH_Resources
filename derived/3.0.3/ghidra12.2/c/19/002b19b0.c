
undefined8 FUN_002b19b0(long *param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  code *pcVar5;
  long lVar6;
  uint uVar7;
  int iVar8;
  undefined8 uVar9;
  int iVar10;
  int iVar11;
  char local_88 [32];
  int local_68 [4];
  undefined1 auStack_58 [8];
  
  iVar8 = 0;
  iVar10 = 0;
  uVar9 = *(undefined8 *)PTR_DAT_04bc1510;
  iVar11 = 0x1f;
  do {
    pcVar5 = *(code **)(*param_1 + 0x40);
    local_88[iVar10] = -3;
    local_88[iVar11] = -3;
    lVar2 = (*pcVar5)(param_1,iVar8);
    if ((lVar2 == 0) ||
       (lVar2 = (**(code **)(*param_1 + 0x40))(param_1,iVar8), *(short *)(lVar2 + 0x1a) == 0)) {
LAB_002b19f4:
      iVar10 = iVar10 + 1;
    }
    else {
      FUN_002ba324(local_68,uVar9,auStack_58,iVar8);
      if (local_68[0] != 0) {
        local_88[iVar10] = (char)iVar8;
        goto LAB_002b19f4;
      }
      local_88[iVar11] = (char)iVar8;
      iVar11 = iVar11 + -1;
    }
    iVar8 = iVar8 + 1;
    if (iVar8 == 0x20) {
      lVar2 = 0;
      do {
        if (local_88[lVar2] != -3) {
          lVar3 = (**(code **)(*param_1 + 0x40))(param_1);
          uVar4 = (uint)*(ushort *)(lVar3 + 0x1a);
          if (*(ushort *)(lVar3 + 0x1a) != 0) {
            uVar7 = *(uint *)(lVar3 + 0x14);
            lVar6 = *(long *)(lVar3 + 8);
            do {
              uVar1 = 0;
              if (*(uint *)(lVar3 + 0x10) <= uVar7) {
                uVar1 = *(uint *)(lVar3 + 0x10);
              }
              uVar1 = uVar7 - uVar1;
              if (*(char *)(lVar6 + (ulong)uVar1 * 0x5b0) == '\0') break;
              if (*(char *)(lVar6 + (ulong)uVar1 * 0x5b0 + 1) != '\0') {
                return *(undefined8 *)(lVar6 + (ulong)uVar1 * 0x5b0 + 0x5a8);
              }
              uVar7 = uVar7 + 1;
              uVar4 = uVar4 - 1;
            } while (uVar4 != 0);
          }
        }
        lVar2 = lVar2 + 1;
        if (lVar2 == 0x20) {
          return 0;
        }
      } while( true );
    }
  } while( true );
}

