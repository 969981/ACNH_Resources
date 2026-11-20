
byte FUN_03ecab00(long param_1,byte *param_2,int param_3,long *param_4,int param_5,void *param_6,
                 int param_7)

{
  long *plVar1;
  long lVar2;
  uint uVar3;
  bool bVar4;
  ulong uVar5;
  byte *pbVar6;
  byte in_w14;
  
  uVar3 = *(uint *)(*(long *)(param_1 + 8) + 0x10);
  if ((int)uVar3 < 1) {
    bVar4 = false;
  }
  else {
    uVar5 = 0;
    pbVar6 = (byte *)(*(long *)(param_1 + 0x18) + 0x23);
    bVar4 = true;
    do {
      in_w14 = pbVar6[-0xf];
      if (((((*param_2 == in_w14) && (in_w14 = param_2[1], in_w14 == pbVar6[-0xe])) &&
           (in_w14 = param_2[2], in_w14 == pbVar6[-0xd])) &&
          (((in_w14 = param_2[3], in_w14 == pbVar6[-0xc] &&
            (in_w14 = param_2[4], in_w14 == pbVar6[-0xb])) &&
           ((in_w14 = param_2[5], in_w14 == pbVar6[-10] &&
            ((in_w14 = param_2[6], in_w14 == pbVar6[-9] &&
             (in_w14 = param_2[7], in_w14 == pbVar6[-8])))))))) &&
         ((in_w14 = param_2[8], in_w14 == pbVar6[-7] &&
          (((((in_w14 = param_2[9], in_w14 == pbVar6[-6] &&
              (in_w14 = param_2[10], in_w14 == pbVar6[-5])) &&
             (in_w14 = param_2[0xb], in_w14 == pbVar6[-4])) &&
            ((in_w14 = param_2[0xc], in_w14 == pbVar6[-3] &&
             (in_w14 = param_2[0xd], in_w14 == pbVar6[-2])))) &&
           ((in_w14 = param_2[0xe], in_w14 == pbVar6[-1] &&
            (in_w14 = param_2[0xf], in_w14 == *pbVar6)))))))) {
        lVar2 = *(long *)(param_1 + 8) + (long)*(int *)(pbVar6 + -0x1b);
        plVar1 = (long *)(lVar2 + param_3);
        if ((*param_4 == *plVar1 && param_4[1] == plVar1[1]) && (int)param_4[2] == (int)plVar1[2]) {
          memcpy((void *)(lVar2 + param_5),param_6,(long)param_7);
          in_w14 = 1;
        }
        else {
          in_w14 = 0;
        }
        break;
      }
      uVar5 = uVar5 + 1;
      pbVar6 = pbVar6 + 0x24;
      bVar4 = uVar5 < uVar3;
    } while (uVar3 != uVar5);
  }
  return bVar4 & in_w14;
}

