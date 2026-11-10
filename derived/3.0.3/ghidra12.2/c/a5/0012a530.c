
uint FUN_0012a530(undefined8 param_1,undefined8 *param_2,uint param_3,undefined8 param_4,
                 undefined1 *param_5,uint param_6,uint param_7)

{
  undefined1 *puVar1;
  long lVar2;
  uint *puVar3;
  uint uVar4;
  int iVar5;
  undefined1 *puVar6;
  long lVar7;
  ulong uVar8;
  undefined4 uStack_b0;
  uint local_80 [12];
  
  *(uint *)(param_2 + 0xe) = param_3 | 0x40000000;
  *param_2 = param_4;
  uVar4 = FUN_00129fa0(param_3,param_4,local_80,&uStack_b0,(long)param_2 + 0x74,param_7);
  if (-1 < (int)uVar4) {
    if (param_6 < uVar4) {
      uVar4 = 0xffff90a9;
    }
    else {
      uVar8 = 0;
      uVar4 = 0xffff90a9;
      *(uint *)(param_2 + 0xf) = param_7 & 7;
      do {
        while (local_80[uVar8] == 0) {
          param_2[uVar8 + 1] = 0;
          uVar8 = uVar8 + 1;
          if (0xb < uVar8) goto LAB_0012a7b0;
        }
        switch(uVar8 & 0xffffffff) {
        case 0:
        case 1:
        case 2:
        case 4:
        case 6:
        case 7:
        case 8:
        case 9:
        case 0xb:
          iVar5 = FUN_0010db70(param_2,local_80[uVar8 - 0xc],local_80[uVar8],param_5);
          if (iVar5 < 0) {
            return 0xffffbda9;
          }
          param_2[uVar8 + 1] = param_5;
          goto LAB_0012a79c;
        case 3:
          puVar1 = param_5;
          if ((*(byte *)(param_2 + 0xf) & 1) == 0) {
            do {
              puVar6 = puVar1;
              puVar1 = puVar6 + 1;
            } while (((ulong)puVar6 & 0x1f) != 0);
            lVar7 = 0;
            do {
              lVar2 = lVar7 + 0x200;
              *(undefined4 *)(puVar1 + lVar7 + -1) = 0;
              *(undefined4 *)(puVar1 + lVar7 + 0x3f) = 0;
              *(undefined4 *)(puVar1 + lVar7 + 0x7f) = 0;
              *(undefined4 *)(puVar1 + lVar7 + 0xbf) = 0;
              *(undefined4 *)(puVar1 + lVar7 + 0xff) = 0;
              *(undefined4 *)(puVar1 + lVar7 + 0x13f) = 0;
              *(undefined4 *)(puVar1 + lVar7 + 0x17f) = 0;
              *(undefined4 *)(puVar1 + lVar7 + 0x1bf) = 0;
              lVar7 = lVar2;
            } while (lVar2 != 0x4000);
          }
          else {
LAB_0012a748:
            puVar3 = local_80 + (uVar8 - 0xc);
            *param_5 = *(undefined1 *)((long)local_80 + uVar8 * 4 + -0x2d);
            param_5[1] = (char)*(undefined2 *)((long)local_80 + uVar8 * 4 + -0x2e);
            param_5[2] = (char)(*puVar3 >> 8);
            param_5[3] = (char)*puVar3;
            iVar5 = FUN_0010db70(param_2,*puVar3,local_80[uVar8] - 4,param_5 + 4);
            puVar6 = param_5;
            if (iVar5 < 0) {
              return 0xffffbda9;
            }
          }
          break;
        case 5:
          puVar1 = param_5;
          if ((*(byte *)(param_2 + 0xf) >> 1 & 1) != 0) goto LAB_0012a748;
          do {
            puVar6 = puVar1;
            puVar1 = puVar6 + 1;
          } while (((ulong)puVar6 & 0x1f) != 0);
          lVar7 = 0;
          do {
            lVar2 = lVar7 + 0x200;
            *(undefined4 *)(puVar1 + lVar7 + -1) = 0;
            *(undefined4 *)(puVar1 + lVar7 + 0x3f) = 0;
            *(undefined4 *)(puVar1 + lVar7 + 0x7f) = 0;
            *(undefined4 *)(puVar1 + lVar7 + 0xbf) = 0;
            *(undefined4 *)(puVar1 + lVar7 + 0xff) = 0;
            *(undefined4 *)(puVar1 + lVar7 + 0x13f) = 0;
            *(undefined4 *)(puVar1 + lVar7 + 0x17f) = 0;
            *(undefined4 *)(puVar1 + lVar7 + 0x1bf) = 0;
            lVar7 = lVar2;
          } while (lVar2 != 0x4000);
          break;
        case 10:
          puVar1 = param_5;
          if ((*(byte *)(param_2 + 0xf) >> 2 & 1) != 0) goto LAB_0012a748;
          do {
            puVar6 = puVar1;
            puVar1 = puVar6 + 1;
          } while (((ulong)puVar6 & 0x1f) != 0);
          lVar7 = 0;
          do {
            lVar2 = lVar7 + 0x500;
            *(undefined4 *)(puVar1 + lVar7 + -1) = 0;
            *(undefined4 *)(puVar1 + lVar7 + 0x9f) = 0;
            *(undefined4 *)(puVar1 + lVar7 + 0x13f) = 0;
            *(undefined4 *)(puVar1 + lVar7 + 0x1df) = 0;
            *(undefined4 *)(puVar1 + lVar7 + 0x27f) = 0;
            *(undefined4 *)(puVar1 + lVar7 + 799) = 0;
            *(undefined4 *)(puVar1 + lVar7 + 0x3bf) = 0;
            *(undefined4 *)(puVar1 + lVar7 + 0x45f) = 0;
            lVar7 = lVar2;
          } while (lVar2 != 0xa000);
          break;
        default:
          goto switchD_0012a5e0_default;
        }
        param_2[uVar8 + 1] = puVar6;
LAB_0012a79c:
        param_5 = param_5 + local_80[uVar8];
        uVar8 = uVar8 + 1;
      } while (uVar8 < 0xc);
LAB_0012a7b0:
      uVar4 = 0;
    }
  }
switchD_0012a5e0_default:
  return uVar4;
}

