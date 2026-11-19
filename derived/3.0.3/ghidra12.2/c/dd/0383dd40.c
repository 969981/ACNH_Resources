
void FUN_0383dd40(long param_1,long param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  byte bVar2;
  bool bVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined8 local_238;
  long *local_230;
  undefined8 local_228;
  undefined1 local_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined4 local_208;
  undefined4 local_204;
  undefined8 *local_200;
  undefined1 local_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8 [50];
  undefined1 auStack_54 [4];
  
  if (**(char **)(param_2 + 0x28) != '\0') {
    plVar4 = *(long **)(param_2 + 8);
    if (0 < (int)plVar4[3]) {
      uVar9 = 0;
      puVar10 = local_1e8;
      do {
        uVar5 = (**(code **)(*plVar4 + 0x18))(plVar4,uVar9 & 0xffffffff);
        bVar3 = 0x31 < uVar9;
        uVar9 = uVar9 + 1;
        puVar1 = puVar10;
        if (bVar3) {
          puVar1 = local_1e8;
        }
        puVar10 = puVar10 + 1;
        *puVar1 = uVar5;
        plVar4 = *(long **)(param_2 + 8);
      } while ((long)uVar9 < (long)(int)plVar4[3]);
    }
    (**(code **)(*(long *)(param_2 + 0x20) + 0x18))(param_2 + 0x20);
    local_230 = *(long **)(param_2 + 8);
    local_200 = local_1e8;
    local_218 = 0;
    uStack_210 = 0;
    local_228 = (**(code **)(*local_230 + 600))();
    lVar8 = *(long *)(param_2 + 8);
    local_220 = 0;
    local_208 = *(undefined4 *)(lVar8 + 0x18);
    local_204 = *(undefined4 *)(lVar8 + 0x28);
    (**(code **)(*(long *)(lVar8 + 0x50) + 0x18))((long *)(lVar8 + 0x50));
    local_238 = *(undefined8 *)(lVar8 + 0x58);
    local_1f8 = 0;
    local_1f0 = 0;
    lVar8 = *(long *)PTR_DAT_04bb49b0;
    if (lVar8 != 0) {
      lVar6 = FUN_03bec770(*(undefined8 *)(lVar8 + 8),local_238,auStack_54);
      if ((lVar6 == 0) || (*(int *)(lVar6 + 0xc) == 0)) {
        *(undefined8 *)(param_1 + 0x20) = 0;
      }
      else {
        if (*(int *)(lVar6 + 0x18) == 0) {
          local_208 = 0;
          bVar2 = *(byte *)(param_1 + 8) & 0xef;
        }
        else {
          bVar2 = *(byte *)(param_1 + 8) | 0x10;
        }
        *(byte *)(param_1 + 8) = bVar2;
        lVar8 = FUN_03bdd5c8(lVar8,&local_238,param_3,0);
        *(long *)(param_1 + 0x20) = lVar8;
        if (lVar8 != 0) {
          if ((*(byte *)(lVar8 + 0xd8) >> 1 & 1) == 0) {
            FUN_03bf3a60(lVar8);
            *(byte *)(lVar8 + 0xd8) = *(byte *)(lVar8 + 0xd8) | 2;
          }
          lVar8 = *(long *)(param_2 + 8);
          uVar9 = (ulong)*(uint *)(lVar8 + 0x28);
          if (0 < (int)*(uint *)(lVar8 + 0x28)) {
            uVar7 = 0;
            do {
              if (uVar7 < (uVar9 & 0xffffffff)) {
                lVar8 = *(long *)(*(long *)(lVar8 + 0x30) + uVar7 * 8);
              }
              else {
                lVar8 = 0;
              }
              lVar6 = *(long *)(param_1 + 0x20);
              FUN_03bf3310(*(undefined8 *)(lVar6 + 0x30),uVar7 & 0xffffffff,lVar8);
              if ((*(uint *)(lVar8 + 0x60) < 2) || (*(uint *)(lVar8 + 0x60) == 2)) {
                *(undefined4 *)(*(long *)(lVar6 + 0x78) + uVar7 * 4) = 0;
              }
              lVar8 = *(long *)(param_2 + 8);
              uVar7 = uVar7 + 1;
              uVar9 = (ulong)*(int *)(lVar8 + 0x28);
            } while ((long)uVar7 < (long)uVar9);
          }
        }
      }
    }
  }
  return;
}

