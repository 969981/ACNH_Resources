
void FUN_011bc6f0(undefined8 *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  uint *puVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  int iVar8;
  undefined1 auStack_60 [16];
  
  lVar6 = *(long *)PTR_DAT_04bb5c90;
  uVar3 = *(uint *)(lVar6 + 0x860);
  if ((0 < (int)uVar3) ||
     (((*(long *)(lVar6 + 0x750) != 0 &&
       (puVar4 = *(uint **)(*(long *)(lVar6 + 0x750) + 8), puVar4 != (uint *)0x0)) &&
      (uVar3 = *puVar4, 0 < (int)uVar3)))) {
    uVar7 = 0;
    do {
      uVar1 = *(uint *)(lVar6 + 0x860);
      if ((int)uVar1 < 1) {
        if (((((*(long *)(lVar6 + 0x750) != 0) &&
              (puVar4 = *(uint **)(*(long *)(lVar6 + 0x750) + 8), puVar4 != (uint *)0x0)) &&
             ((*(uint *)(lVar6 + 0x768) <= uVar7 ||
              (*(char *)(*(long *)(lVar6 + 0x770) + uVar7) != '\0')))) &&
            ((uVar7 < *puVar4 && (puVar4[1] != 0)))) && ((ushort)puVar4[2] != 0)) {
          iVar8 = 0xc;
          if (*(char *)((long)puVar4 + 10) != '\0') {
            iVar8 = 0x1c;
          }
          if ((ulong)(puVar4[1] * (int)uVar7 + (uint)(ushort)puVar4[2] * 8 + iVar8) + (long)puVar4
              != 0) {
            if (((*(long *)(lVar6 + 0x750) == 0) ||
                (puVar4 = *(uint **)(*(long *)(lVar6 + 0x750) + 8), puVar4 == (uint *)0x0)) ||
               (*puVar4 <= uVar7)) goto LAB_011bc740;
LAB_011bc7a4:
            uVar5 = uVar7 & 0xffffffff;
            if (*(uint *)(lVar6 + 0x878) <= uVar7) {
              uVar5 = 0;
            }
            uVar2 = *(undefined4 *)(*(long *)(lVar6 + 0x880) + uVar5 * 0x28 + 0x20);
            goto LAB_011bc744;
          }
        }
      }
      else if (uVar7 < uVar1) {
        uVar5 = uVar7 & 0xffffffff;
        if (*(uint *)(lVar6 + 0x850) <= uVar7) {
          uVar5 = 0;
        }
        if (*(long *)(*(long *)(lVar6 + 0x858) + uVar5 * 8) != 0) {
          if (uVar7 < uVar1) goto LAB_011bc7a4;
LAB_011bc740:
          uVar2 = 0;
LAB_011bc744:
          FUN_011b9ab0(auStack_60,uVar2);
          (**(code **)*param_1)(param_1,auStack_60);
        }
      }
      uVar7 = uVar7 + 1;
    } while (uVar3 != uVar7);
  }
  return;
}

