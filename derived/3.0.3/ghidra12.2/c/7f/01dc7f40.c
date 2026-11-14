
undefined8 FUN_01dc7f40(long param_1,long *param_2)

{
  ulong uVar1;
  undefined *puVar2;
  long *plVar3;
  uint *puVar4;
  uint uVar5;
  long lVar6;
  uint uVar7;
  uint uVar8;
  ushort *puVar9;
  int iVar10;
  ulong uVar11;
  undefined4 local_24;
  
  puVar2 = PTR_DAT_04bb21d0;
  if (*(int *)(param_1 + 8) == 0) {
    *(undefined1 *)(param_1 + 0x48) = 0;
    lVar6 = *(long *)puVar2;
    if ((((*(int *)(lVar6 + 0x78) != 0) && (*(int *)(lVar6 + 0xc4) - 1U < 2)) &&
        (**(char **)(lVar6 + 0x2070) != '\0' && *param_2 != 0)) && (lVar6 = param_2[1], lVar6 != 0))
    {
      *(long *)(param_1 + 0x58) = lVar6 + 0xc;
      local_24 = 0;
      plVar3 = (long *)FUN_00818af8(*(undefined8 *)PTR_DAT_04bb2110,&local_24,lVar6 + 0x1900c,0);
      puVar4 = (uint *)(**(code **)(*plVar3 + 0x30))(plVar3,*(undefined8 *)(param_1 + 0x58),4);
      *(uint **)(param_1 + 0x50) = puVar4;
      uVar7 = 0;
      puVar4[1] = 0xa0028;
      puVar4[2] = 0xa0002;
      uVar1 = param_2[1];
      uVar5 = (uint)uVar1;
      if (3 < uVar5) {
        uVar11 = 0;
        uVar7 = 0;
        do {
          iVar10 = *(int *)(*param_2 + uVar11);
          uVar7 = (iVar10 * 0x16a88000 | (uint)(iVar10 * -0x3361d2af) >> 0x11) * 0x1b873593 ^ uVar7;
          iVar10 = (int)uVar11;
          uVar11 = (ulong)(iVar10 + 4);
          uVar7 = (uVar7 >> 0x13 | uVar7 << 0xd) * 5 + 0xe6546b64;
        } while (iVar10 + 8U <= uVar5);
      }
      uVar8 = uVar5 & 3;
      if ((uVar1 & 3) != 0) {
        puVar9 = (ushort *)((*param_2 + (uVar1 & 0xffffffff)) - (uVar1 & 3));
        if (uVar8 == 1) {
          uVar8 = (uint)(byte)*puVar9;
        }
        else if (uVar8 == 2) {
          uVar8 = (uint)*puVar9;
        }
        else if (uVar8 == 3) {
          uVar8 = (uint)(byte)puVar9[1] << 0x10 | (uint)*(byte *)((long)puVar9 + 1) << 8 |
                  (uint)(byte)*puVar9;
        }
        else {
          uVar8 = 0;
        }
        uVar7 = (uVar8 * 0x16a88000 | uVar8 * -0x3361d2af >> 0x11) * 0x1b873593 ^ uVar7;
      }
      uVar7 = (uVar7 ^ uVar5 ^ (uVar7 ^ uVar5) >> 0x10) * -0x7a143595;
      uVar7 = (uVar7 ^ uVar7 >> 0xd) * -0x3d4d51cb;
      *puVar4 = uVar7 ^ uVar7 >> 0x10;
      memcpy((void *)(*(long *)(param_1 + 0x50) + 0xc),(void *)*param_2,param_2[1]);
      FUN_03ebb160(param_1,1);
      return 1;
    }
  }
  return 0;
}

