
void FUN_0277bf00(int param_1,undefined8 *param_2)

{
  ushort uVar1;
  undefined *puVar2;
  long lVar3;
  uint uVar4;
  int iVar5;
  ushort *puVar6;
  ulong uVar7;
  long lVar8;
  int iVar9;
  undefined4 local_70;
  undefined4 uStack_6c;
  long local_68;
  
  puVar2 = PTR_DAT_04bb37e0;
  if (param_1 != 0) {
    iVar9 = 0;
    do {
      puVar6 = (ushort *)(**(code **)*param_2)(param_2,iVar9);
      lVar8 = DAT_053274a0;
      uVar4 = FUN_0277d6c4();
      if (DAT_053274a0 == 0) {
LAB_0277bff0:
        uVar1 = *puVar6;
joined_r0x0277bff8:
        if (uVar1 != 0xfffe) {
          *puVar6 = *(ushort *)puVar2;
          *(undefined *)(puVar6 + 1) = puVar2[2];
          *(undefined *)((long)puVar6 + 3) = puVar2[3];
          *(undefined4 *)(puVar6 + 2) = *(undefined4 *)(puVar2 + 4);
        }
      }
      else {
        lVar8 = *(long *)(lVar8 + 0x57e58);
        uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
        if ((*(uint *)(lVar8 + 0x1d8) <= uVar4) ||
           (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar4 * 8) == 0)) goto LAB_0277bff0;
        uVar7 = FUN_0277e788(puVar6);
        if ((uVar7 & 1) == 0) {
          uVar1 = *puVar6;
          goto joined_r0x0277bff8;
        }
      }
      uVar7 = FUN_0277faf0(puVar6);
      if ((uVar7 & 1) == 0) {
        uVar4 = (uint)*puVar6;
        if (*puVar6 < 0x39e2) goto LAB_0277c09c;
LAB_0277c050:
        if ((uVar4 - 0x39e2 < 0x11) && ((1 << (ulong)(uVar4 - 0x39e2 & 0x1f) & 0x18003U) != 0))
        goto LAB_0277c0ac;
        if (uVar4 != 0xfffe) {
LAB_0277c1d8:
          if (uVar4 - 0x323b < 3) goto LAB_0277c0ac;
        }
      }
      else {
        uVar1 = *(ushort *)puVar2;
        uVar4 = (uint)uVar1;
        *puVar6 = uVar1;
        *(undefined *)(puVar6 + 1) = puVar2[2];
        *(undefined *)((long)puVar6 + 3) = puVar2[3];
        *(undefined4 *)(puVar6 + 2) = *(undefined4 *)(puVar2 + 4);
        if (0x39e1 < uVar1) goto LAB_0277c050;
LAB_0277c09c:
        if (((3 < uVar4 - 0x3878) && (uVar4 != 0x3390)) && (uVar4 != 0x365b)) goto LAB_0277c1d8;
LAB_0277c0ac:
        *puVar6 = *(ushort *)puVar2;
        *(undefined *)(puVar6 + 1) = puVar2[2];
        *(undefined *)((long)puVar6 + 3) = puVar2[3];
        *(undefined4 *)(puVar6 + 2) = *(undefined4 *)(puVar2 + 4);
      }
      lVar8 = DAT_053274a0;
      uVar4 = FUN_0277d6c4(puVar6);
      lVar3 = DAT_053274a0;
      if (DAT_053274a0 != 0) {
        lVar8 = *(long *)(lVar8 + 0x57e58);
        uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
        if ((uVar4 < *(uint *)(lVar8 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
          local_68 = 0;
          local_70 = *(undefined4 *)puVar6;
          uStack_6c = *(undefined4 *)(puVar6 + 2);
          uVar4 = FUN_0277d6c4(&local_70);
          if (DAT_053274a0 != 0) {
            lVar8 = *(long *)(lVar3 + 0x57e58);
            uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
            if ((uVar4 < *(uint *)(lVar8 + 0x1d8)) &&
               (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
              lVar8 = *(long *)PTR_DAT_04bc0428;
              uVar4 = FUN_0277d6c4(puVar6);
              uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
              if ((uVar4 < *(uint *)(lVar8 + 0x1d8)) &&
                 (lVar8 = *(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar4 * 8), lVar8 != 0)) {
                local_68 = lVar8;
              }
            }
          }
          iVar5 = FUN_0277d6c4(&local_70);
          if (iVar5 == 0x515) {
            *puVar6 = *(ushort *)puVar2;
            *(undefined *)(puVar6 + 1) = puVar2[2];
            *(undefined *)((long)puVar6 + 3) = puVar2[3];
            *(undefined4 *)(puVar6 + 2) = *(undefined4 *)(puVar2 + 4);
          }
        }
      }
      iVar9 = iVar9 + 1;
    } while (param_1 != iVar9);
  }
  return;
}

