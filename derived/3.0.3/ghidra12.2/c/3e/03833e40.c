
void FUN_03833e40(long param_1,long param_2,undefined8 param_3)

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
  undefined8 local_228;
  long *local_220;
  undefined8 local_218;
  undefined1 local_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined4 local_1f8;
  undefined4 local_1f4;
  undefined8 *local_1f0;
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
    local_220 = *(long **)(param_2 + 8);
    local_1f0 = local_1e8;
    local_208 = 0;
    uStack_200 = 0;
    local_218 = (**(code **)(*local_220 + 600))();
    lVar8 = *(long *)(param_2 + 8);
    local_210 = 0;
    local_1f8 = *(undefined4 *)(lVar8 + 0x18);
    local_1f4 = *(undefined4 *)(lVar8 + 0x28);
    (**(code **)(*(long *)(lVar8 + 0xe8) + 0x18))((long *)(lVar8 + 0xe8));
    local_228 = *(undefined8 *)(lVar8 + 0xf0);
    lVar8 = *(long *)PTR_DAT_04bb2918;
    if (lVar8 != 0) {
      lVar6 = FUN_03bec770(*(undefined8 *)(lVar8 + 8),local_228,auStack_54);
      if ((lVar6 == 0) || (*(int *)(lVar6 + 0xc) == 0)) {
        *(undefined8 *)(param_1 + 0x20) = 0;
      }
      else {
        if (*(int *)(lVar6 + 0x18) == 0) {
          local_1f8 = 0;
          bVar2 = *(byte *)(param_1 + 8) & 0xef;
        }
        else {
          bVar2 = *(byte *)(param_1 + 8) | 0x10;
        }
        *(byte *)(param_1 + 8) = bVar2;
        lVar8 = FUN_03bd217c(lVar8,&local_228,param_3,0);
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

