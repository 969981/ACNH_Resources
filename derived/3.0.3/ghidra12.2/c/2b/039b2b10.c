
void FUN_039b2b10(float param_1,long param_2,long param_3)

{
  byte bVar1;
  uint uVar2;
  long *plVar3;
  float *pfVar4;
  undefined8 *puVar5;
  long lVar6;
  float fVar7;
  
  bVar1 = *(byte *)(param_2 + 0x34);
  uVar2 = (uint)bVar1;
  if ((bVar1 >> 3 & 1) != 0) {
    param_1 = *(float *)(param_2 + 0x30) * param_1;
    if (((bVar1 >> 1 & 1) == 0) && (*(int *)(param_2 + 0x10) != 0)) {
      puVar5 = *(undefined8 **)(param_2 + 0x18);
      lVar6 = (long)*(int *)(param_2 + 0x10) << 3;
      do {
        plVar3 = (long *)*puVar5;
        if (*(long *)(param_2 + 8) == param_3) {
          *(float *)(plVar3[1] + 0xc) = param_1;
          pfVar4 = (float *)plVar3[1];
          fVar7 = (float)(**(code **)(pfVar4 + 4))
                                   (*pfVar4 + pfVar4[3],pfVar4[1],pfVar4[2],
                                    *(undefined8 *)(pfVar4 + 6));
          *pfVar4 = fVar7;
          plVar3 = (long *)*puVar5;
          (**(code **)(*plVar3 + 0x18))(plVar3);
        }
        (**(code **)(*plVar3 + 0x38))(plVar3,param_3 + 0xd8);
        puVar5 = puVar5 + 1;
        lVar6 = lVar6 + -8;
      } while (lVar6 != 0);
      uVar2 = (uint)*(byte *)(param_2 + 0x34);
    }
    if ((uVar2 >> 2 & 1) == 0) {
      if (*(int *)(param_2 + 0x20) != 0) {
        puVar5 = *(undefined8 **)(param_2 + 0x28);
        lVar6 = (long)*(int *)(param_2 + 0x20) << 3;
        do {
          plVar3 = (long *)*puVar5;
          if (*(long *)(param_2 + 8) == param_3) {
            *(float *)(plVar3[1] + 0xc) = param_1;
            pfVar4 = (float *)plVar3[1];
            fVar7 = (float)(**(code **)(pfVar4 + 4))
                                     (*pfVar4 + pfVar4[3],pfVar4[1],pfVar4[2],
                                      *(undefined8 *)(pfVar4 + 6));
            *pfVar4 = fVar7;
            (**(code **)(*plVar3 + 0x18))(plVar3);
          }
          (**(code **)(*plVar3 + 0x38))(plVar3,param_3 + 0xd8);
          puVar5 = puVar5 + 1;
          lVar6 = lVar6 + -8;
        } while (lVar6 != 0);
      }
      lVar6 = *(long *)(param_2 + 8);
      *(byte *)(lVar6 + 0x2e1) =
           *(byte *)(lVar6 + 0x2e1) & 0xf |
           (byte)(~(-1 << (ulong)(*(byte *)(lVar6 + 0x2e2) & 0x1f)) << 4);
    }
  }
  return;
}

