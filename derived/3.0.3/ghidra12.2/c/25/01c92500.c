
void FUN_01c92500(long param_1)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  long *plVar8;
  uint uVar9;
  undefined **local_c8;
  undefined1 local_c0 [16];
  undefined1 *local_b0;
  undefined8 uStack_a8;
  undefined1 local_a0;
  byte bStack_9f;
  byte bStack_9e;
  undefined5 uStack_9d;
  undefined8 local_98;
  undefined2 uStack_90;
  undefined6 local_8e;
  undefined2 uStack_88;
  undefined6 uStack_86;
  undefined2 uStack_80;
  undefined6 local_7e;
  undefined2 uStack_78;
  undefined6 uStack_76;
  undefined2 uStack_70;
  undefined6 local_6e;
  undefined2 uStack_68;
  undefined6 uStack_66;
  
  lVar3 = *(long *)(DAT_05ae6a60 + 0x38);
  if (lVar3 != 0) {
    iVar1 = *(int *)(param_1 + 0x20);
    if (iVar1 != 0) {
      lVar5 = *(long *)(param_1 + 0x28);
      iVar4 = 0;
      do {
        lVar6 = lVar5 + (long)iVar4 * 0x50;
        *(undefined8 *)(lVar6 + 0x40) = 0;
        *(undefined1 *)(lVar6 + 0x48) = 0;
        iVar4 = iVar4 + 1;
      } while (iVar1 != iVar4);
      plVar8 = *(long **)(lVar3 + 0x40);
      uVar2 = *(uint *)(plVar8 + 2);
      if (0 < (int)uVar2 && 0 < *(int *)(param_1 + 0x20)) {
        uVar9 = 0;
        do {
          if (uVar9 < uVar2) {
            iVar1 = 0;
            if ((int)plVar8[1] <= (int)(uVar9 + *(int *)((long)plVar8 + 0xc))) {
              iVar1 = (int)plVar8[1];
            }
            puVar7 = (undefined8 *)
                     (*plVar8 + (long)(int)(uVar9 + (*(int *)((long)plVar8 + 0xc) - iVar1)) * 0x140)
            ;
          }
          else {
            puVar7 = (undefined8 *)0x0;
          }
          local_7e = 0;
          uStack_78 = 0;
          uStack_76 = 0;
          uStack_70 = 0;
          local_6e = 0;
          uStack_68 = 0;
          uStack_66 = 0;
          local_a0 = 0;
          bStack_9f = 0;
          bStack_9e = 0;
          local_98 = 0;
          local_8e = 0;
          uStack_88 = 0;
          uStack_86 = 0;
          uStack_80 = 0;
          (**(code **)(puVar7[5] + 0x18))(puVar7 + 5);
          local_c8 = &PTR_LAB_04a426b8;
          local_c0[0] = 0;
          uStack_a8 = 0x10;
          local_b0 = local_c0;
          FUN_0018b070(&local_c8,puVar7[6],0xffffffffffffffff);
          local_a0 = (undefined1)puVar7[2];
          bStack_9f = (byte)(*(uint *)(puVar7 + 3) >> 4) & 0xf;
          bStack_9e = (byte)(*(uint *)(puVar7 + 3) >> 8) & 0xf;
          iVar1 = FUN_0018bed0(&local_c8,&local_98,0x38);
          if (-1 < iVar1) {
            uVar2 = uVar9;
            if (*(uint *)(param_1 + 0x20) <= uVar9) {
              uVar2 = 0;
            }
            *(undefined8 *)(*(long *)(param_1 + 0x28) + (ulong)uVar2 * 0x50 + 0x40) = *puVar7;
            uVar2 = uVar9;
            if (*(uint *)(param_1 + 0x20) <= uVar9) {
              uVar2 = 0;
            }
            puVar7 = (undefined8 *)(*(long *)(param_1 + 0x28) + (ulong)uVar2 * 0x50);
            puVar7[4] = CONCAT62(local_7e,uStack_80);
            puVar7[5] = CONCAT62(uStack_76,uStack_78);
            puVar7[6] = CONCAT62(local_6e,uStack_70);
            puVar7[7] = CONCAT62(uStack_66,uStack_68);
            puVar7[2] = CONCAT62(local_8e,uStack_90);
            puVar7[3] = CONCAT62(uStack_86,uStack_88);
            *puVar7 = CONCAT53(uStack_9d,CONCAT12(bStack_9e,CONCAT11(bStack_9f,local_a0)));
            puVar7[1] = local_98;
            uVar2 = uVar9;
            if (*(uint *)(param_1 + 0x20) <= uVar9) {
              uVar2 = 0;
            }
            lVar3 = *(long *)(param_1 + 0x28) + (ulong)uVar2 * 0x50;
            *(byte *)(lVar3 + 0x48) = *(byte *)(lVar3 + 0x48) | 1;
          }
          local_c8 = (undefined **)(PTR_DAT_04bc0ec8 + 0x10);
          FUN_0018b1a0(&local_c8);
          uVar2 = *(uint *)(plVar8 + 2);
          uVar9 = uVar9 + 1;
        } while (((int)uVar9 < (int)uVar2) && ((int)uVar9 < *(int *)(param_1 + 0x20)));
      }
    }
    *(undefined1 *)(param_1 + 0xf5) = 1;
  }
  return;
}

