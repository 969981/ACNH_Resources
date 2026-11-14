
void FUN_01b88ca0(long param_1,undefined8 param_2)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  uint *puVar6;
  ulong uVar7;
  int iVar8;
  ulong uVar9;
  undefined **local_90;
  undefined8 uStack_88;
  undefined **local_70;
  undefined1 *puStack_68;
  
  lVar3 = DAT_05336138;
  puStack_68 = (undefined1 *)&local_90;
  local_90 = &PTR_LAB_04a394b0;
  local_70 = &PTR_FUN_04a394d8;
  uVar7 = 0;
  uStack_88 = param_2;
  do {
    uVar1 = *(uint *)(lVar3 + 0x1c0);
    uVar9 = (ulong)uVar1;
    if ((int)uVar1 < 1) {
      uVar9 = 0;
      if (*(long *)(lVar3 + 0xb0) != 0) {
        puVar6 = *(uint **)(*(long *)(lVar3 + 0xb0) + 8);
        uVar9 = 0;
        if (puVar6 != (uint *)0x0) {
          uVar9 = (ulong)*puVar6;
        }
      }
    }
    if (uVar9 <= uVar7) {
      return;
    }
    if (uVar7 < 0x80) {
      uVar9 = uVar7 >> 3;
      uVar2 = 1 << (ulong)((uint)uVar7 & 7);
      if ((uVar2 & *(byte *)(param_1 + uVar9)) != 0) {
        if ((int)uVar1 < 1) {
          if ((((*(long *)(lVar3 + 0xb0) != 0) &&
               (puVar6 = *(uint **)(*(long *)(lVar3 + 0xb0) + 8), puVar6 != (uint *)0x0)) &&
              ((*(uint *)(lVar3 + 200) <= uVar7 ||
               (*(char *)(*(long *)(lVar3 + 0xd0) + uVar7) != '\0')))) &&
             (((uVar7 < *puVar6 && (puVar6[1] != 0)) && ((ushort)puVar6[2] != 0)))) {
            iVar8 = 0xc;
            if (*(char *)((long)puVar6 + 10) != '\0') {
              iVar8 = 0x1c;
            }
            lVar5 = (ulong)(puVar6[1] * (uint)uVar7 + (uint)(ushort)puVar6[2] * 8 + iVar8) +
                    (long)puVar6;
            goto joined_r0x01b88e08;
          }
        }
        else if (uVar7 < uVar1) {
          uVar4 = uVar7;
          if (*(uint *)(lVar3 + 0x1b0) <= uVar7) {
            uVar4 = 0;
          }
          lVar5 = *(long *)(*(long *)(lVar3 + 0x1b8) + uVar4 * 8);
joined_r0x01b88e08:
          if ((lVar5 != 0) && (uVar4 = (*(code *)*local_70)(&local_70), (uVar4 & 1) == 0)) {
            *(byte *)(param_1 + uVar9) = *(byte *)(param_1 + uVar9) & ((byte)uVar2 ^ 0xff);
          }
        }
      }
    }
    uVar7 = uVar7 + 1;
  } while( true );
}

