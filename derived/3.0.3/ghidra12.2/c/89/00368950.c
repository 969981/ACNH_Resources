
void FUN_00368950(long param_1,long param_2,undefined8 param_3,int *param_4)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 local_70;
  long lStack_68;
  undefined4 local_60 [2];
  undefined8 *local_58;
  
  lVar3 = FUN_0037c748(*(undefined8 *)(param_1 + 0x18),0x13);
  if ((lVar3 == 0) || (*(long *)(lVar3 + 8) == 0)) {
    puVar4 = (undefined8 *)(**(code **)PTR_DAT_04bd0800)(0xe8,4,*(undefined8 *)PTR_DAT_04bd0810);
    if (puVar4 != (undefined8 *)0x0) {
      puVar4[4] = 0;
      puVar4[2] = puVar4 + 2;
      puVar4[3] = puVar4 + 2;
      *(undefined1 *)(puVar4 + 5) = 0;
      *(undefined4 *)(puVar4 + 0xe) = 0;
      *(undefined4 *)(puVar4 + 0x19) = 0;
      *(undefined1 *)(puVar4 + 0x1c) = 0;
      puVar4[0xf] = 0;
      puVar4[0x10] = puVar4 + 0x10;
      puVar4[0x11] = puVar4 + 0x10;
      puVar4[0x12] = puVar4 + 0x12;
      *puVar4 = 0;
      puVar4[1] = 0;
      puVar4[0x13] = puVar4 + 0x12;
      puVar4[0x14] = 0;
      puVar4[0x15] = 0;
      puVar4[0x16] = puVar4 + 0x16;
      puVar4[0x17] = puVar4 + 0x16;
      puVar4[0x18] = 0;
      puVar4[0x1a] = 0;
      puVar4[0x1b] = 0;
    }
    local_70 = param_3;
    lStack_68 = param_1;
    FUN_00368b10(&local_70,puVar4,*(undefined8 *)(param_2 + 0x128));
    local_60[0] = 0x13;
    local_58 = puVar4;
    FUN_0037c7b4(*(undefined8 *)(param_1 + 0x18),0x13,local_60,0x10);
    if (param_4 != (int *)0x0) {
      puVar7 = (undefined8 *)puVar4[3];
      puVar1 = puVar4 + 2;
      if (puVar7 != puVar1) {
        iVar2 = *param_4;
        if (0 < iVar2) {
          do {
            if (0 < iVar2) {
              uVar6 = puVar7[3];
              lVar3 = 0;
              lVar8 = 0x1c;
              do {
                uVar5 = FUN_003606c0(uVar6,*(long *)(param_4 + 2) + lVar8 + -0x1c);
                if ((uVar5 & 1) != 0) {
                  if (*(long *)(param_4 + 2) != 0) {
                    FUN_00368c50(*(undefined4 *)
                                  (*(long *)(param_4 + 4) +
                                  (ulong)*(uint *)(*(long *)(param_4 + 2) + lVar8)),puVar4,uVar6);
                  }
                  break;
                }
                lVar3 = lVar3 + 1;
                lVar8 = lVar8 + 0x28;
              } while (lVar3 < *param_4);
            }
            puVar7 = (undefined8 *)puVar7[1];
            if (puVar7 == puVar1) {
              return;
            }
            iVar2 = *param_4;
          } while( true );
        }
        do {
          puVar7 = (undefined8 *)puVar7[1];
        } while (puVar7 != puVar1);
      }
    }
  }
  return;
}

