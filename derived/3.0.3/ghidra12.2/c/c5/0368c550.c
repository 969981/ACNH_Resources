
/* WARNING: Removing unreachable block (ram,0x0368c650) */

void FUN_0368c550(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  ushort uVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  ushort *puVar9;
  undefined1 *__src;
  ushort *puVar10;
  undefined8 *puVar11;
  undefined4 local_130 [2];
  undefined **local_128;
  undefined1 *local_120;
  int local_118;
  undefined1 local_114 [15];
  undefined1 local_105;
  undefined4 local_100;
  undefined8 local_fc;
  undefined8 local_f4;
  undefined8 local_ec;
  undefined4 local_e4;
  undefined2 local_e0;
  undefined1 local_de;
  undefined1 local_dd;
  undefined4 local_dc;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined2 local_b8;
  undefined1 local_b6;
  undefined1 local_b5;
  undefined4 local_b4;
  undefined4 uStack_b0;
  undefined8 local_ac;
  undefined8 local_a4;
  undefined8 local_9c;
  undefined4 local_94;
  undefined2 local_90;
  undefined1 local_8e;
  undefined1 local_8d;
  undefined4 local_8c;
  undefined2 local_88;
  undefined1 local_86;
  undefined1 local_85;
  undefined4 local_84;
  undefined2 local_80;
  undefined1 local_7e;
  undefined1 local_7d;
  undefined4 local_7c;
  undefined2 local_78;
  undefined1 local_76;
  undefined1 local_75;
  undefined4 local_74;
  byte local_70;
  
  lVar7 = DAT_05abbc58;
  puVar6 = PTR_DAT_04bb46b0;
  if ((DAT_05abbc58 != 0) && (*(int *)(param_1 + 0x278) != 0)) {
    puVar11 = *(undefined8 **)(param_1 + 0x280);
    puVar1 = puVar11 + *(int *)(param_1 + 0x278);
    do {
      lVar8 = *(long *)puVar6;
      if (lVar8 != 0) {
        puVar9 = (ushort *)*puVar11;
        uVar5 = *puVar9;
        local_130[0] = 1;
        if ((((((*(byte *)(lVar8 + 0x50d) ^ 0xff) & 6) == 0) &&
             (lVar8 = (**(code **)(**(long **)(*(long *)(lVar8 + 0x10) + 0x188) + 0x30))(),
             uVar5 < 500)) && (lVar8 != 0)) &&
           (uVar4 = *(uint *)(puVar9 + 0x26), uVar4 != 0xffffffff)) {
          local_118 = 0x10;
          local_105 = 0;
          local_114[0] = 0;
          lVar8 = param_1 + 0x698 + (ulong)uVar4 * 0xd8;
          if (0x25 < uVar4) {
            lVar8 = param_1 + 0x698;
          }
          local_100 = *(undefined4 *)(lVar8 + 0x44);
          local_fc = *(undefined8 *)(lVar8 + 0x48);
          local_f4 = *(undefined8 *)(lVar8 + 0x50);
          local_ec = *(undefined8 *)(lVar8 + 0x58);
          local_e4 = *(undefined4 *)(lVar8 + 0x60);
          local_e0 = *(undefined2 *)(lVar8 + 100);
          local_de = *(undefined1 *)(lVar8 + 0x66);
          local_dc = *(undefined4 *)(lVar8 + 0x68);
          local_c8 = *(undefined8 *)(lVar8 + 0x7c);
          local_dd = *(undefined1 *)(lVar8 + 0x67);
          uStack_d0 = *(undefined8 *)(lVar8 + 0x74);
          local_b8 = *(undefined2 *)(lVar8 + 0x8c);
          local_d8 = *(undefined8 *)(lVar8 + 0x6c);
          local_c0 = *(undefined4 *)(lVar8 + 0x84);
          uStack_bc = *(undefined4 *)(lVar8 + 0x88);
          local_b6 = *(undefined1 *)(lVar8 + 0x8e);
          local_b5 = *(undefined1 *)(lVar8 + 0x8f);
          local_b4 = *(undefined4 *)(lVar8 + 0x90);
          uStack_b0 = *(undefined4 *)(lVar8 + 0x94);
          local_ac = *(undefined8 *)(lVar8 + 0x98);
          local_a4 = *(undefined8 *)(lVar8 + 0xa0);
          local_9c = *(undefined8 *)(lVar8 + 0xa8);
          local_94 = *(undefined4 *)(lVar8 + 0xb0);
          local_90 = *(undefined2 *)(lVar8 + 0xb4);
          local_8e = *(undefined1 *)(lVar8 + 0xb6);
          local_8d = *(undefined1 *)(lVar8 + 0xb7);
          local_8c = *(undefined4 *)(lVar8 + 0xb8);
          local_88 = *(undefined2 *)(lVar8 + 0xbc);
          local_86 = *(undefined1 *)(lVar8 + 0xbe);
          local_85 = *(undefined1 *)(lVar8 + 0xbf);
          local_84 = *(undefined4 *)(lVar8 + 0xc0);
          local_80 = *(undefined2 *)(lVar8 + 0xc4);
          local_7e = *(undefined1 *)(lVar8 + 0xc6);
          local_7d = *(undefined1 *)(lVar8 + 199);
          local_7c = *(undefined4 *)(lVar8 + 200);
          local_78 = *(undefined2 *)(lVar8 + 0xcc);
          local_76 = *(undefined1 *)(lVar8 + 0xce);
          local_75 = *(undefined1 *)(lVar8 + 0xcf);
          local_74 = *(undefined4 *)(lVar8 + 0xd0);
          local_128 = &PTR_LAB_048fb098;
          puVar10 = puVar9 + 4;
          local_120 = local_114;
          (**(code **)(*(long *)puVar10 + 0x18))(puVar10);
          __src = *(undefined1 **)(puVar9 + 8);
          if (local_114 != __src) {
            (**(code **)(*(long *)(puVar9 + 4) + 0x18))(puVar10);
            lVar8 = 0;
            do {
              if (*(char *)(*(long *)(puVar9 + 8) + lVar8) == '\0') goto LAB_0368c5d8;
              lVar2 = *(long *)(puVar9 + 8) + lVar8;
              if (*(char *)(lVar2 + 1) == '\0') {
                lVar8 = lVar8 + 1;
                goto LAB_0368c5d8;
              }
              if (*(char *)(lVar2 + 2) == '\0') {
                lVar8 = lVar8 + 2;
                goto LAB_0368c5d8;
              }
              lVar8 = lVar8 + 3;
            } while (lVar8 != 0x80001);
            lVar8 = 0;
LAB_0368c5d8:
            iVar3 = (int)lVar8;
            if (local_118 <= (int)lVar8) {
              iVar3 = local_118 + -1;
            }
            memcpy(local_114,__src,(long)iVar3);
            local_114[iVar3] = 0;
          }
          local_130[0] = *(undefined4 *)(puVar9 + 0x28);
          local_70 = (byte)puVar9[0x24] >> 4 & 1;
          FUN_03733c40(lVar7,local_130);
        }
      }
      puVar11 = puVar11 + 1;
    } while (puVar11 != puVar1);
  }
  return;
}

